#include <stdio.h>
#include <malloc.h>
typedef struct treenode {
	char data;
	struct treenode* lchild, * rchild;
}treenode,*tree;
//���������˫��֧������
//void build(tree& t)
//{
//	char ch;
//	ch = getchar();
//	if (ch == '#')
//		t = NULL;
//	else
//	{
//		t = (treenode*)malloc(sizeof(treenode));
//		t->data = ch;
//		t->lchild = NULL;
//		t->rchild = NULL;
//		build(t->lchild);
//		build(t->rchild);
//	}
//}
//
//int num(tree t)
//{
//	if (!t)
//		return 0;
//	else if (t->lchild && t->rchild)
//		return num(t->lchild) + num(t->rchild) + 1;
//	else
//		return num(t->lchild) + num(t->rchild);
//}
//
//int main()
//{
//	tree t;
//	build(t);
//	printf("%������˫��֧������Ϊ%d", num(t));
//	return 0;
//}

//������������������
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

void swap(tree& t)
{
	treenode* p;
	if (t)
	{
		swap(t->lchild);
		swap(t->rchild);
		p = t->lchild;
		t->lchild = t->rchild;
		t->rchild = p;
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
//ABD##E##CF##G##
int main()
{
	tree t;
	build(t);
	printf("������");
	swap(t);
	disp(t);
	return 0;
}