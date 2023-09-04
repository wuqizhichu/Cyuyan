#include<stdio.h>
#include <malloc.h>
typedef struct lnode {
	int data;
	struct lnode* next;
}lnode,*linklist;

////带头结点的无序链表中删除指定区间元素
//int a[5] = { 3,5,6,9,1 };
//int n = 5;
//
//void buildlist(linklist& L)
//{
//	L = (linklist)malloc(sizeof(lnode));
//	lnode* s, * r = L;
//	for (int i = 0; i < n; i++)
//	{
//		s = (lnode*)malloc(sizeof(lnode));
//		s->data = a[i];
//		r->next = s;
//		r = r->next;
//	}
//	r->next = NULL;
//}
//
//void print(linklist L)
//{
//	lnode* s = L->next;
//	while (s)
//	{
//		printf("%d ", s->data);
//		s = s->next;
//	}
//	printf("\n");
//}
//
//void deletex(linklist& L, int s, int t)
//{
//	lnode* p = L->next, * r = L;
//	while (p)
//	{
//		if (p->data > s && p->data < t)
//		{
//			r->next = p->next;
//			free(p);
//			p = r->next;
//		}
//		else
//		{
//			r = p;
//			p = p->next;
//		}
//	}
//}
//
//int main()
//{
//	linklist L;
//	buildlist(L);
//	print(L);
//	deletex(L, 4, 7);
//	print(L);
//	return 0;
//}

//找出两个单链表的公共结点
int a[5] = { 2,4,6,7,3 };
int b[6] = { 1,5,9,6,7,3 };
int n1 = 5, n2 = 6;

void buildlist(linklist& L,int aa[],int n)
{
	L = (linklist)malloc(sizeof(lnode));
	lnode* s, * r = L;
	for (int i = 0; i < n; i++)
	{
		s = (lnode*)malloc(sizeof(lnode));
		s->data = aa[i];
		r->next = s;
		r = r->next;
	}
	r->next = NULL;
}

void print(linklist L)
{
	lnode* s = L->next;
	while (s)
	{
		printf("%d ", s->data);
		s = s->next;
	}
	printf("\n");
}

linklist findd(linklist L1, linklist L2)
{
	lnode* s1 = L1->next;
	while (s1)
	{
		lnode* s2 = L2->next;
		while (s2)
		{
			if (s1->data == s2->data)
				return s1;
			else s2 = s2->next;
		}
		s1 = s1->next;
	}
}

int main()
{
	linklist L1, L2;
	buildlist(L1, a, n1);
	buildlist(L2, b, n2);
	print(L1);
	print(L2);
	linklist L3 = findd(L1, L2);
	printf("%d", L3->data);
	return 0;
}