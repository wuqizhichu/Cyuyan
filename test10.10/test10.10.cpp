#include <stdio.h>
#include <malloc.h>
//�����������������в���ָ������ں����ǰ�����
typedef struct treenode {
	char data;
	struct treenode* lchild, * rchild;
	int ltag, rtag;
}treenode,*tree;

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
		t->ltag = 0;
		t->rtag = 0;
		build(t->lchild);
		build(t->rchild);
	}
}

tree pre;//����������������ǰ�����
//����������
void zx(tree& t)
{
	if (t != NULL)
	{
		//�������죬��Ҷ�ӽ��
		zx(t->lchild);
		if (t->lchild == NULL)//û������
		{
			t->ltag = 1;
			t->lchild = pre;
		}
		else t->ltag = 0;
		if (pre != NULL && pre->rchild == NULL)//û���Һ���
		{
			pre->rtag = 1;//ǰ������к��
			pre->rchild = t;//��̽��ָ��ǰ
		}
		pre = t;
		zx(t->rchild);
	}
}
//�Һ�̵�ǰ�����
tree inpostpre(tree t, treenode* p)
{
	treenode* q;//���ָ��
	//�ý�����Һ��� ��������Һ���
	if (p->rtag == 0)
		q = p->rchild;
	//�ý��û���Һ��ӣ������ӣ����������
	else if (p->ltag == 0)
		q = p->lchild;
	//�ý���ǰ��Ϊ�գ���Ϊ�����һ����㣬�޺���ǰ��
	else if (p->lchild == NULL)
		q = NULL;
	//����
	else
	{
		//�����������������Ƚ��
		while (p->ltag ==1 && p->lchild != NULL)
			p = p->lchild;
		if (p->ltag == 0)
			q = p->lchild;//���ҵ����Ƚ�㣬�������ӣ������������
		else
			q = NULL;//�޺���ǰ��
	}
	return q;
}

int main()
{
	tree t;
	build(t);
	zx(t);
	printf("%c", inpostpre(t, t->rchild)->data);
	//ABD##E##CF##G##
	return 0;
}