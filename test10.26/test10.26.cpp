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

//��������������������С�ؼ���
//��С�ؼ���
//char min(tree t)
//{
//	while (t->lchild != NULL)
//	{
//		t = t->lchild;
//	}
//	return t->data;
//}
//
////�����ؼ���
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

//��С����������������������в�С��k�Ĺؼ���
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