#include<stdio.h>
#include <malloc.h>
typedef struct treenode {
	char data;
	struct treenode* lchild, * rchild;
}treenode,*tree;
//int search(int a[], int n, int k)
//{
//	//遍历
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] == k) break;
//	}
//	//找到就交换，返回交换的位置
//	if (i > 0 && i < n)
//	{
//		int t = a[i - 1];
//		a[i - 1] = a[i];
//		a[i] = t;
//		return i - 1;
//	}
//	//没有找到，返回-1
//	else return -1;
//}
//
//int main()
//{
//	int a[6] = { -1,2,3,4,5 };
//	printf("%d", search(a, 5, 3));
//	return 0;
//}

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
//初始化前驱值
int pre = -1;

int isok(tree t)
{
	if (t == NULL)
		return 1;
	else
	{
	//递归求左子树是否是二叉排序树
		int b1 = isok(t->lchild);
	//判断左子树的值和当前结点与前驱结点值的比较
		if (b1 == 0 || ((t->data) - '0') <= pre)
		return 0;
	//将当前结点作为下一个前驱结点保存下来
		pre = (t->data) - '0';
	//递归求右子树的值
		return isok(t->rchild);
	}
}

int main()
{
	tree t;
	buildtree(t);
	printf("%d", isok(t));
	//FECA#B##D###HG##I##
	return 0;
}