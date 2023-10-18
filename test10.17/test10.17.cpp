#include <stdio.h>
#include <malloc.h>
//typedef struct treenode {
//	char data;
//	struct treenode* lchild, * rbro;
//}treenode,*tree;
//
//void buildtree(tree& t)
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
//		t->rbro = NULL;
//		buildtree(t->lchild);
//		buildtree(t->rbro);
//	}
//}
////以孩子兄弟链表为存储结构，递归求树的深度
//int height(tree t)
//{
//	if (t == NULL)
//		return 0;
//	else
//	{
//		//递归计算左孩子子树高度
//		int l = height(t->lchild);
//		//递归计算右兄弟子树高度
//		int r = height(t->rbro);
//		return l + 1 > r ? l + 1 : r;
//	}
//}
//
//int main()
//{
//	tree t;
//	buildtree(t);
//	printf("%d", height(t));
//	//ABD#E##CF####
//	return 0;
//}

//已知一棵树的层次序列及每个结点的度，构造此树的孩子
typedef struct treenode {
	char data;
	struct treenode* lchild, * rbro;
}treenode,*tree;

void creat(tree& t, char e[], int degree[], int n)
{
	//动态申请结点数组
	tree* point = new tree[10];
	for (int i = 0; i < n; i++)
	{
		//给每个结点动态申请内存
		point[i] = (treenode*)malloc(sizeof(treenode));
		//结点初始化，初始值为给的字母和对应的左右指针，初始化为空
		point[i]->data = e[i];
		point[i]->lchild = NULL;
		point[i]->rbro = NULL;
	}
	//孩子结点序号
	int k = 0;
	//按照给的结点顺序访问结点
	for (int i = 0; i < n; i++)
	{
		//获取结点度
		int d = degree[i];
		//如果有度，说明有孩子结点
		if (d)
		{
			//孩子序号递增
			k++;
			//第一个孩子作为自己的左孩子结点
			point[i]->lchild = point[k];
			//剩余孩子，每个结点依次为前一个结点的兄弟结点
			for (int j = 2; j <= d; j++)
			{
				//孩子序号递增
				k++;
				//前一个结点的右兄弟指针指向现在孩子序号的结点
				point[k - 1]->rbro = point[k];
			}
		}
	}
	//链表的头为第一个结点
	t = point[0];
	//动态申请的内存进行释放
	delete[] point;
}

//输出先序序列
void disp(tree t)
{
	if (t)
	{
		printf("%c ", t->data);
		disp(t->lchild);
		disp(t->rbro);
	}
}

int main()
{
	tree t;
	char e[8] = { 'A','B','C','D','E','F','G' };
	//每个结点度数数组
	int degree[8] = { 3,2,1,0,0,0 };
	creat(t, e, degree, 7);
	disp(t);
	//先序序列ABEFCGD
	return 0;
}