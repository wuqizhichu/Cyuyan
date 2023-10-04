#include<stdio.h>
#include <malloc.h>
typedef struct treenode {
	char data;
	struct treenode* lchild, * rchild;
}treenode,*tree;

void build(tree& t)
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
		t->rchild = NULL;
		build(t->lchild);
		build(t->rchild);
	}
}

int similar(tree t1, tree t2)
{
	int left, right;
	if (t1 == NULL && t2 == NULL)
		return 1;
	else if (t1 == NULL || t2 == NULL)
		return 0;
	else
	{
		left = similar(t1->lchild, t2->lchild);
		right= similar(t1->rchild, t2->rchild);
		return (left && right);
	}
}

int main()
{
	tree t1,t2;
	build(t1);
	build(t2);
	printf("%d ",similar(t1, t2));
	return 0;
}