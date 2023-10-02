#include <stdio.h>
#include <malloc.h>
typedef struct treenode {
	char data;
	struct treenode* lchild, * rchild;
}treenode,*tree;
//ɾ������������XΪ���ڵ���������ͷſռ�
void build(tree& t)
{
	char ch;
	ch = getchar();
	if (ch == '#')
		t = NULL;
	else
	{
		t = (treenode*)malloc(sizeof(treenode));
		t->data = ch;
		t->lchild = NULL;
		t->rchild = NULL;
		build(t->lchild);
		build(t->rchild);
	}
}

//�ݹ��ͷŽ��
void release(tree& t)
{
	if (!t)
		return;
	release(t->lchild);
	release(t->rchild);
	free(t);
}

//ǰ�����
void deletex(tree& t,char x)
{
	if (t == NULL)
		return ;
	if (t->data == x)
	{
		release(t);
		t = NULL;
	}
	if (t != NULL)
	{
		deletex(t->lchild, x);
		deletex(t->rchild, x);
	}
}

void disp(tree t)
{
	if (t)
	{
		printf("%c ", t->data);
		disp(t->lchild);
		disp(t->rchild);
	}
}

int main()
{
	tree t;
	build(t);
	deletex(t, 'B');
	disp(t);
	return 0;
}