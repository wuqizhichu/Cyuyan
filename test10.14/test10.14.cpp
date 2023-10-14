#include <stdio.h>
#include<malloc.h>
//将二叉树转化为中缀表达式
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

//转化函数
void toexp(tree t,int deep)
{
	if (t == NULL)
		return;
	else if (t->lchild == NULL && t->rchild == NULL)
	{
		printf("%c ", t->data);
	}
	else
	{
		if (deep > 1)
			printf("(");
		toexp(t->lchild, deep + 1);
		printf("%c ", t->data);
		toexp(t->rchild, deep + 1);
		if (deep > 1)
			printf(")");
	}
}

int main()
{
	tree t;
	buildtree(t);
	toexp(t, 1);
	//*+a##b##*c##-#d##
	//+*a##b##-#-c##d##
	//+a##b##
	return 0;
}