#include <stdio.h>
#include <malloc.h>

//typedef struct lnode {
//	int data;
//	struct lnode* next;
//}lnode,*linklist;
//
////带头节点的单链表中删除唯一最小值
//int a[5] = { 2,1,3,4,6 };
//int n = 5;
//void buildlist(linklist& L)
//{
//	L = (linklist)malloc(sizeof(lnode));
//	lnode* s, * r = L;
//	r->data = a[0];
//	if (n == 1)
//	r->next = NULL;
//	else
//	{
//		for (int i = 1; i < n; i++)
//		{
//			s = (lnode*)malloc(sizeof(lnode));
//			s->data = a[i];
//			r->next=s;
//			r = r->next;
//		}
//		r->next = NULL;
//	}
//}
//
//void print(lnode* L)
//{
//	lnode* s = L;
//	while (s)
//	{
//		printf("%d ", s->data);
//		s = s->next;
//	}
//	printf("\n");
//}
//
//void deletemin(linklist &L)
//{
//	lnode* p = L->next, * q, * r = L, * s;
//	q = p, s = r;
//	while (p)
//	{
//		if (p->data < q->data)
//		{
//			q = p;
//			s = r;
//		}
//		r = p;
//		p = p->next;
//	}
//	s->next = q->next;
//	free(q);
//}
//
//int main()
//{
//	lnode list;
//	lnode* L = &list;
//	buildlist(L);
//	print(L);
//	deletemin(L);
//	print(L);
//	return 0;
//}

typedef struct lnode {
	int data;
	struct lnode* next;
}lnode,*linklist;

//就地逆置单链表
int a[5] = { 1,2,3,4,5 };
int n = 5;

void buildlist(linklist& L)	
{
	L = (linklist)malloc(sizeof(lnode));
	lnode* s, * r = L;
	for (int i = 0; i < n; i++)
	{
		s = (lnode *)malloc(sizeof(lnode));
		s->data = a[i];
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

void reverse(linklist& L)
{
	lnode* p = L->next, * q;
	L->next = NULL;
	while (p)
	{
		q = p->next;
		p->next = L->next;
		L->next = p;
		p = q;
	}
}

int main()
{
	linklist L;
	buildlist(L);
	print(L);
	reverse(L);
	print(L);
	return 0;
}