#include <stdio.h>
#include<malloc.h>
//求二叉树的WPL
typedef struct treenode{
	char weight;
	struct treenode * lchild, * rchild;
}treenode, * tree;

void buildtree(tree &t)
{
	char ch;
	ch = getchar();
	if (ch == '#')
		t = NULL;
	else
	{
		t = (treenode*)malloc(sizeof(treenode));
		t->weight = ch;
		t->lchild = NULL;
		t->rchild = NULL;
		buildtree(t->lchild);
		buildtree(t->rchild);
	}
}
//计算WPL
int wplpre(tree t, int deep)
{
	//静态变量，存储结果值
	static int ans = 0;
	//若是叶子结点，累加值
	if (t->lchild == NULL && t->rchild == NULL)
		ans += (deep * ((t->weight) - '0'));
	//若不是叶子结点，递归遍历左右子树找叶子结点且层数+1
	if (t->lchild != NULL)
		wplpre(t->lchild, deep + 1);
	if (t->rchild != NULL)
		wplpre(t->rchild, deep + 1);
	return ans;
}

int main()
{
	tree t;
	buildtree(t);
	printf("%d ", wplpre(t, 0));
	return 0;
}