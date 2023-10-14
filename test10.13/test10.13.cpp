#include <stdio.h>
#include<malloc.h>
//���������WPL
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
//����WPL
int wplpre(tree t, int deep)
{
	//��̬�������洢���ֵ
	static int ans = 0;
	//����Ҷ�ӽ�㣬�ۼ�ֵ
	if (t->lchild == NULL && t->rchild == NULL)
		ans += (deep * ((t->weight) - '0'));
	//������Ҷ�ӽ�㣬�ݹ��������������Ҷ�ӽ���Ҳ���+1
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