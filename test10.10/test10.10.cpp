#include <stdio.h>
#include <malloc.h>
//在中序线索二叉树中查找指定结点在后序的前驱结点
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

tree pre;//遍历二叉树保留的前驱结点
//中序线索化
void zx(tree& t)
{
	if (t != NULL)
	{
		//向左延伸，找叶子结点
		zx(t->lchild);
		if (t->lchild == NULL)//没有左孩子
		{
			t->ltag = 1;
			t->lchild = pre;
		}
		else t->ltag = 0;
		if (pre != NULL && pre->rchild == NULL)//没有右孩子
		{
			pre->rtag = 1;//前驱结点有后继
			pre->rchild = t;//后继结点指向当前
		}
		pre = t;
		zx(t->rchild);
	}
}
//找后继的前驱结点
tree inpostpre(tree t, treenode* p)
{
	treenode* q;//结果指针
	//该结点有右孩子 结果就是右孩子
	if (p->rtag == 0)
		q = p->rchild;
	//该结点没有右孩子，有左孩子，结果是左孩子
	else if (p->ltag == 0)
		q = p->lchild;
	//该结点的前驱为空，即为中序第一个结点，无后序前驱
	else if (p->lchild == NULL)
		q = NULL;
	//其他
	else
	{
		//不断沿着线索找祖先结点
		while (p->ltag ==1 && p->lchild != NULL)
			p = p->lchild;
		if (p->ltag == 0)
			q = p->lchild;//若找到祖先结点，且有左孩子，结果就是左孩子
		else
			q = NULL;//无后序前驱
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