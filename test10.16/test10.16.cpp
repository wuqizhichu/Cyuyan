#include <stdio.h>
#include <malloc.h>
typedef struct treenode {
	char data;
	struct treenode* lchild, * rbro;
}treenode,*tree;

void buildtree(tree& t)
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
		t->rbro = NULL;
		buildtree(t->lchild);
		buildtree(t->rbro);
	}
}

int leaves(tree t)
{
	if (t == NULL)
		return 0;
	//孩子为空即左孩子域为空，为叶子结点，结果+1在加右兄弟子树的叶子结点
	if (t->lchild == NULL)
		return 1 + leaves(t->rbro);
	//有孩子，结果为左孩子子树和右兄弟子树的叶子结点之和
	else
		return leaves(t->lchild) + leaves(t->rbro);
}

int main()
{
	tree t;
	buildtree(t);
	printf("%d ", leaves(t));
	//ABD#E##C##FG###
	return 0;
}