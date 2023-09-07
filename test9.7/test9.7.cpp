#include <stdio.h>
#include <malloc.h>
typedef struct lnode {
	int data;
	struct lnode* next;
}lnode,*linklist;

//int a[6] = { 1,3,4,6,7,9 };
//int b[5] = { 2,3,5,8,9 };
//int n1 = 6,n2=5;
//
////将两个单链表合并为一个链表，利用原链表中的结点
//void buildlist(linklist& L, int aa[],int n)
//{
//	L = (linklist)malloc(sizeof(lnode));
//	lnode* r=L, * s;
//	for (int i = 0; i < n; i++)
//	{
//		s = (lnode*)malloc(sizeof(lnode));
//		s->data = aa[i];
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
//void merge(linklist& L1, linklist& L2)
//{
//	lnode* p1 = L1->next, * p2 = L2->next, * r;
//	L1->next = NULL;
//	while (p1 && p2)
//	{
//		if (p1->data < p2->data)
//		{
//			r = p1->next;
//			p1->next = L1->next;
//			L1->next = p1;
//			p1 = r;
//		}
//		else
//		{
//			r = p2->next;
//			p2->next = L1->next;
//			L1->next = p2;
//			p2 = r;
//		}
//	}
//	if (p1)
//		p2 = p1;//如果P1有元素，P2指向P1，进行循环。如果P1无元素，直接对P2进行循环
//	while (p2)
//	{
//		r = p2->next;
//		p2->next = L1->next;
//		L1->next = p2;
//		p2 = r;
//	}
//	free(L2);
//}
//
//int main()
//{
//	linklist L1, L2;
//	buildlist(L1, a, n1);
//	buildlist(L2, b, n2);
//	print(L1);
//	print(L2);
//	merge(L1, L2);
//	print(L1);
//	return 0;
//}


//选取两个链表的公共结点创建新链表，不破坏原有链表结构
//int a[5] = { 1,3,4,6,7 };
//int b[6] = { 2,3,4,5,6,8 };
//int n1 = 5;
//int n2 = 6;
//
//void buildlist(linklist& L, int aa[], int n)
//{
//	L = (linklist)malloc(sizeof(lnode));
//	lnode* s, * r = L;
//	for (int i = 0; i < n; i++)
//	{
//		s = (lnode*)malloc(sizeof(lnode));
//		s->data = aa[i];
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
//linklist L;
//void buildnew(linklist L1, linklist L2)
//{
//	L = (linklist)malloc(sizeof(lnode));
//	lnode* p1 = L1->next, * p2 = L2->next, * p = L,*s;
//	while (p1 && p2)
//	{
//		if (p1->data == p2->data)
//		{
//			s = (lnode*)malloc(sizeof(lnode));
//			s->data = p1->data;
//			p->next = s;
//			p = p->next;
//			p1 = p1->next;
//			p2 = p2->next;
//		}
//		else if (p1->data < p2->data)
//			p1 = p1->next;
//		else
//			p2 = p2->next;
//	}
//	p->next = NULL;
//}
//
//int main()
//{
//	linklist L1, L2;
//	buildlist(L1, a, n1);
//	buildlist(L2, b, n2);
//	print(L1);
//	print(L2);
//	buildnew(L1, L2);
//	print(L);
//	return 0;
//}

//选AB两个链表公共元素放在A中
int a[5] = { 1,2,3,4,5 };
int b[4] = { 2,3,5,6 };
int n1 = 5;
int n2 = 4;

void buildlist(linklist& L, int aa[], int n)
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

void disp(linklist L)
{
	lnode* s = L->next;
	while (s)
	{
		printf("%d ", s->data);
		s = s->next;
	}
	printf("\n");
}

void newlist(linklist& L1, linklist L2)
{
	lnode* p1 = L1->next, * p2 = L2->next, * r,*q;
	L1->next = NULL;
	r = L1;
	while (p1 && p2)
	{
		if (p1->data < p2->data)
			p1 = p1->next;
		else if (p1->data > p2->data)
			p2 = p2->next;
		else
		{
			q = p1->next;
			r->next = p1;
			r = r->next;
			p1 = q;
			p2 = p2->next;
		}
	}
	r->next = NULL;
}

int main()
{
	linklist L1, L2;
	buildlist(L1, a, n1);
	buildlist(L2, b, n2);
	disp(L1);
	disp(L2);
	newlist(L1, L2);
	disp(L1);
	return 0;
}