#include<stdio.h>
#include <malloc.h>
//typedef struct lnode {
//	int data;
//	struct lnode* next;
//}lnode,*linklist;
//
//将一个循环链表连接在另一个循环链表之后，保持循环链表形式
//int a[4] = { 1,2,3,4 };
//int b[4] = { 5,6,7,8 };
//int n = 4;
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
//		r = s;
//	}
//	r->next = L;
//}
//
//void print(linklist L)
//{
//	lnode* s = L->next;
//	while (s != L)
//	{
//		printf("%d ", s->data);
//		s = s->next;
//	}
//	printf("\n");
//}
//
//void link(linklist& L1, linklist& L2)
//{
//	lnode* p1 = L1->next, * p2 = L2->next;
//	while (p1->next != L1)
//		p1 = p1->next;//L1的尾节点
//	while (p2->next != L2)
//		p2 = p2->next;//L2的尾节点
//	p1->next = L2->next;//L1的尾节点指向L2的第一个元素
//	p2->next = L1;//L2的尾节点指向L1的头结点
//}
//	
//int main()
//{
//	linklist L1, L2;
//	buildlist(L1, a, n);
//	buildlist(L2, b, n);
//	print(L1);
//	print(L2);
//	link(L1, L2);
//	print(L1);
//	return 0;
//}

//反复输出单链表中最小值，并删除结点，最后删除头结点
//int a[8] = { 2,4,1,5,6,9,8,7 };
//int n = 8;
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
//	r->next = L;
//}
//
//void print(linklist L)
//{
//	lnode* s = L->next;
//	while (s!= L)
//	{
//		printf("%d ", s->data);
//		s = s->next;
//	}
//	printf("\n");
//}
//
//void deletex(linklist& L)
//{
//	lnode* p = L->next, * r = L, * min = p, * mp = r;
//	while (L->next != L)
//	{
//		p = L->next, r = L, min = p, mp = r;
//		while (p != L)
//		{
//			if (p->data < min->data)
//			{
//				min = p;
//				mp = r;
//			}
//			else
//			{
//				r = p;
//				p = p->next;
//			}
//		}
//		printf("%d  ", min->data);
//		mp->next = min->next;
//		free(min);
//	}
//	free(L);
//}
//
//int main()
//{
//	linklist L;
//	buildlist(L);
//	print(L);
//	deletex(L);
//	return 0;
//}

typedef struct lnode {
	int data, f;
	struct lnode* next, * pre;
}lnode,*linklist;

int a[6] = { 1,2,3,4,5,6 };
int n = 5;

void buildlist(linklist& L)
{
	L = (linklist)malloc(sizeof(lnode));
	lnode* s, * r = L;
	r->pre = NULL, r->next = L;
	for (int i = 0; i < n; i++)
	{
		s = (lnode*)malloc(sizeof(lnode));
		s->data = a[i];
		s->f = 0;
		s->next = r->next;
		r->next->pre = s;
		s->pre = r;
		r->next = s;
		r = s;
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

linklist locate(linklist& L, int x)
{
	lnode* p = L->next, * q;
	while (p && p->data != x)
		p = p->next;
	if (!p)
		printf("没有此节点\n");
	else
	{
		p->f++;
		if (p->next != NULL)
		{
			p->next->pre = p->pre;
			p->pre->next = p->next;
			q = p->pre;
			while (q != L && q->f <= p->f)
				q = q->pre;
			p->next = q->next;
			q->next->pre = p;
			p->pre = q;
			q->next = p;
		}
	}
	return p;
}

int main()
{
	linklist L;
	buildlist(L);
	print(L);
	locate(L, 3);
	locate(L, 4);
	locate(L, 3);
	locate(L, 2);
	print(L);
	return 0;
}