#include<stdio.h>
#include <malloc.h>
typedef struct treenode {
	char data;
	struct treenode* lchild, * rchild;
}treenode,*tree;
//int search(int a[], int n, int k)
//{
//	//����
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] == k) break;
//	}
//	//�ҵ��ͽ��������ؽ�����λ��
//	if (i > 0 && i < n)
//	{
//		int t = a[i - 1];
//		a[i - 1] = a[i];
//		a[i] = t;
//		return i - 1;
//	}
//	//û���ҵ�������-1
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
//��ʼ��ǰ��ֵ
int pre = -1;

int isok(tree t)
{
	if (t == NULL)
		return 1;
	else
	{
	//�ݹ����������Ƿ��Ƕ���������
		int b1 = isok(t->lchild);
	//�ж���������ֵ�͵�ǰ�����ǰ�����ֵ�ıȽ�
		if (b1 == 0 || ((t->data) - '0') <= pre)
		return 0;
	//����ǰ�����Ϊ��һ��ǰ����㱣������
		pre = (t->data) - '0';
	//�ݹ�����������ֵ
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