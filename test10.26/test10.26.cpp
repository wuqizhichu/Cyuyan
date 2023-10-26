#include<stdio.h>
#include<malloc.h>
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

//求给定二叉排序树最大最小关键字
//最小关键字
//char min(tree t)
//{
//	while (t->lchild != NULL)
//	{
//		t = t->lchild;
//	}
//	return t->data;
//}
//
////求最大关键字
//char max(tree t)
//{
//	while (t->rchild != NULL)
//	{
//		t = t->rchild;
//	}
//	return t->data;
//}
//
//int main()
//{
//	tree t;
//	buildtree(t);
//	printf("%c \n", min(t));
//	printf("%c \n", max(t));
//	//FECA#B##D###HG##I##
//	return 0;
//}

//从小到大输出二叉排序树中所有不小于k的关键字
void disp(tree t, char k)
{
	if (t == NULL)
		return;
	if(t->rchild!=NULL)
	    disp(t->rchild,k);
	if (t->data >= k)
		printf("%c ", t->data);
	if(t->lchild!=NULL)
        disp(t->lchild, k);
}

int main()
{
	tree t;
	buildtree(t);
	disp(t, 'E');
	return 0;
}