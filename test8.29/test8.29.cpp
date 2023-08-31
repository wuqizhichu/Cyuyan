#include<stdio.h>
#include <malloc.h>
//递归算法删除不带头结点的单链表中的元素
//链表定义
typedef struct lnode {
	int data;
	struct lnode* next;
}lnode,*LinkList;

//int a[5] = { 1,3,5,5,6 };
//int n = 5;
//
////尾插法建立链表
//void insert(lnode *L)
//{
//	lnode* s, * r=L;//s为申请的插入节点的指针，r为头指针
//	r->data = a[0];
//	if (n == 1)
//		r->next = NULL;
//	else
//	{
//		for (int i = 1; i < n; i++)
//		{
//			s = (lnode *)malloc(sizeof(lnode));
//			s->data = a[i];
//			r->next = s;
//			r = s;
//		}
//		r->next = NULL;
//	}
//}
////打印函数
//void print(lnode *L)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		lnode* s=L;
//		while (s!=NULL)
//		{
//			printf("%d ", s->data);
//			s = s->next;
//		}
//	}
//}
//
////删除函数
//void deletex(lnode*&L, int x)
//{
//	if (L == NULL)
//		return;
//	lnode* p;
//	if (L->data == x)
//	{
//		p = L;
//		L = L->next;
//		free(p);
//		deletex(L->next, x);
//	}
//	else(deletex(L->next, x));
//}
//
//int  main()
//{
//	lnode list;
//	lnode* L = &list;
//	insert(L);
//	print(L);
//	deletex(L, 5);
//	print(L);
//	return 0;
//}

//删除带头节点的链表中值为X的元素，元素不唯一
int a[6] = { 1,3,5,7,5,5 };
int n = 6;
//尾插法
void insert(LinkList& L)
{
	L = (LinkList)malloc(sizeof(lnode));//头结点
	lnode* s, * r = L;//r为表尾指针
	r->next = NULL;  
	for (int i = 0; i < n; i++)
	{
		s = (LinkList)malloc(sizeof(lnode));
		s->data = a[i];
		r->next = s;
		r = r->next;
	}
}

void print(LinkList L)
{
	lnode* s = L->next;
	while (s)
	{
		printf("%d ", s->data);
		s = s->next;
	}
}

void deletex(LinkList& L, int x)
{
	lnode* p = L->next, * q, * r = L;
	while (p)
	{
		if (p->data != x)
		{
			r->next = p;//防止断链
			r = p;
			p = p->next;
		}
		else
		{
			q = p;
			p = p->next;
			free(q);
		}
	}
}

int main()
{
	LinkList L;
	insert(L);
	print(L);
	deletex(L, 5);
	print(L);
	return 0;
}