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
//��ָ������ڶ����������еĲ��
//int level(tree t,treenode *p)
//{
//	//��γ�ʼ��
//	int n = 0;
//	//�������Ľ��
//	treenode* tt = t;
//	//�����յĻ������ڵ����+1
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

//�ж϶������Ƿ���ƽ�������
//��������
void isAVL(tree t, int& ba, int& h)
{
	//���������ĸ߶� ƽ�����ӱ���
	int h1, h2, b1=0, b2=0;
	//�������߶�Ϊ0
	if (t == NULL)
	{
		h = 0;
		ba = 1;
	}
	//ֻ��һ�����ڵ� �߶�Ϊ1 ƽ������Ϊ1
	else if (t->lchild == NULL && t->rchild == NULL)
	{
		h = 1;
		ba = 1;
	}
	else
	{
	//�ݹ��ж�������
		isAVL(t->lchild,ba,h);
	//�ݹ��ж�������
		isAVL(t->rchild,ba,h);
	//�����ڵ� ��������
		h = max(h1, h2) + 1;
	//�жϸ߶Ȳ�
		if (abs(h1-h2) <= 1)
		{ 
			ba = b1 && b2;
		}
		else
			ba = 0;
	//�ж�ƽ������
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