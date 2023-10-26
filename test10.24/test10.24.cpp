#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include <thread>

using namespace std;
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
//求指定结点在二叉排序树中的层次
//int level(tree t,treenode *p)
//{
//	//层次初始化
//	int n = 0;
//	//遍历树的结点
//	treenode* tt = t;
//	//树不空的话，根节点层数+1
//	if (t != NULL)
//	{
//		n++;
//		while (tt->data != p->data)
//		{
//			if (tt->data > p->data)
//				tt = tt->lchild;
//			else
//				tt = tt->rchild;
//			n++;
//		}
//	}
//	return n;
//}
//
//int main()
//{
//	tree t;
//	buildtree(t);
//	printf("%d", level(t, t->lchild->lchild->lchild->rchild));
//	//FECA#B##D###HG##I##
//	return 0;
//}

//判断二叉树是否是平衡二叉树
//后续遍历
void isAVL(tree t, int& ba, int& h)
{
	//左右子树的高度 平衡因子变量
	int h1, h2, b1=0, b2=0;
	//空树，高度为0
	if (t == NULL)
	{
		h = 0;
		ba = 1;
	}
	//只有一个根节点 高度为1 平衡因子为1
	else if (t->lchild == NULL && t->rchild == NULL)
	{
		h = 1;
		ba = 1;
	}
	else
	{
	//递归判断左子树
		isAVL(t->lchild,ba,h);
	//递归判断右子树
		isAVL(t->rchild,ba,h);
	//到根节点 更新树高
		h = max(h1, h2) + 1;
	//判断高度差
		if (abs(h1-h2) <= 1)
		{ 
			ba = b1 && b2;
		}
		else
			ba = 0;
	//判断平衡因子
    }
}

int main()
{
	tree t;
	buildtree(t);
	int ba, h;
	isAVL(t, ba, h);
	printf("%d", ba);
	//FECA#B##D###HG##I##
	return 0;
}