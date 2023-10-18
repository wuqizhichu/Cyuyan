#include <stdio.h>
#include <malloc.h>
typedef struct treenode {
	char data;
	struct treenode* lchild, * rbro;
}treenode,*tree;

void buildtree(tree& t)
{
	char ch;
	ch = getchar();
	if (ch == '#')
		t = NULL;
	else
	{
		t = (treenode *)malloc(sizeof(treenode));
		t->data = ch;
		t->lchild = NULL;
		t->rbro = NULL;
		buildtree(t->lchild);
		buildtree(t->rbro);
	}
}

int leaves(tree t)
{
	if (t == NULL)
		return 0;
	//����Ϊ�ռ�������Ϊ�գ�ΪҶ�ӽ�㣬���+1�ڼ����ֵ�������Ҷ�ӽ��
	if (t->lchild == NULL)
		return 1 + leaves(t->rbro);
	//�к��ӣ����Ϊ�������������ֵ�������Ҷ�ӽ��֮��
	else
		return leaves(t->lchild) + leaves(t->rbro);
}

int main()
{
	tree t;
	buildtree(t);
	printf("%d ", leaves(t));
	//ABD#E##C##FG###
	return 0;
}