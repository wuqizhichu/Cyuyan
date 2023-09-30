#include <stdio.h>
#include <malloc.h>
//求二叉树先序遍历第K个元素的值
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
		t = (treenode*)malloc(sizeof(treenode));
		t->data = ch;
		t->lchild = NULL;
		t->rchild = NULL;
		build(t->lchild);
		build(t->rchild);
	}
}

int i=1;
char ch;
char prenode(tree t,int k)
{
	if (t == NULL)
		return '#';
	if (i == k)
		return t->data;
	i++;
	ch = prenode(t->lchild,k);
	if (ch != '#')
		return ch;
	ch = prenode(t->rchild, k);
	return ch;
}
//ABD##E##CF##G##
int main()
{
	tree t;
	build(t);
	printf("%c ", prenode(t, 3));
	return 0;
}