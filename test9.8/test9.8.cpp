#include <malloc.h>
#include <stdio.h>
//typedef struct lnode {
//	int data;
//	struct lnode* next;
//}lnode,*linklist;
//
////判断一个序列是不是另一个序列的子序列
//int a[6] = { 1,2,3,4,5,6 };
//int b[3] = { 2,3,4 };
//int n1 = 6;
//int n2 = 3;
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
//bool isok(linklist L1, linklist L2)
//{
//	lnode* p1 = L1->next, * p2 = L2->next, * r=p1->next;
//	while (p1 && p2)
//	{
//		if (p1->data == p2->data)
//		{
//			p1 = p1->next;
//			p2 = p2->next;
//		}
//		else
//		{
//			r = r->next;
//			p1 = r;
//			p2 = L2->next;
//		}
//	}
//	if (p2)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	linklist L1, L2;
//	buildlist(L1, a, n1);
//	buildlist(L2, b, n2);
//	print(L1);
//	print(L2);
//	if (isok(L1, L2))
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}


//判断带头结点的循环双链表元素是否对称
typedef struct lnode {
	int data;
	struct lnode* next, * prior;
}lnode,*dlinklist;

int a[7] = { 1,2,3,4,3,2,1 };
int n = 7;

void buildlist(dlinklist& L)
{
	L = (dlinklist)malloc(sizeof(lnode));
	lnode* s, * r = L;
	L->prior = L;
	L->next = L;
	for (int i = 0; i < n; i++)
	{
		s = (lnode*)malloc(sizeof(lnode));
		s->data = a[i];
		s->next = r->next;
		r->next->prior = s;
		s->prior = r;
		r->next = s;
		r = s;
		L->prior = s;
	}
}

void print(dlinklist L)
{
	lnode* s = L->next;
	while (s != L)
	{
		printf("%d ", s->data);
		s = s->next;
	}
	printf("\n");
}

bool isok(dlinklist L)
{
	lnode* p = L->next, * q = L->prior;
	while (p != q && q->next != p)
	{
		if (p->data == q->data)
		{
			p = p->next;
			q = q->prior;
		}
		else
			return false;
	}
}

int main()
{
	dlinklist L;
	buildlist(L);
	print(L);
	if (isok)
		printf("yes");
	else
		printf("no");
	return 0;
}