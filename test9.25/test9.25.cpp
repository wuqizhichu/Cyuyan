#include <stdio.h>
#include <malloc.h>
typedef struct treenode {
	char data;
	struct treenode* lchild, * rchild;
}treenode,*tree;

void buildtree(tree& t)
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
		buildtree(t->lchild);
		buildtree(t->rchild);
	}
}

int dept(tree t)
{
	if (!t)
		return 0;
	treenode* q[10];
	int f = -1, r = -1;
	int L = 0, ans = 0;
	q[++r] = t;
	treenode* p;//工作指针
	while (f < r)
	{
		p = q[++f];
		if (p->lchild)
			q[++r] = p->lchild;
		if (p->rchild)
			q[++r] = p->rchild;
		if (L == f)
		{
			ans++;
			L = r;
		}
	}
	return ans;
}

int  main()
{
	tree t;
	buildtree(t);
	printf("树的高度为：%d", dept(t));
	return 0;
}