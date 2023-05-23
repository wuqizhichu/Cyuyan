#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <malloc.h>
#define Maxsize 50
typedef struct LNode
{
	ElemType data;//数据域
	struct LNode *next;//指针域
}LNode,*LinkList;

//头插法
LinkList List_HeadInsert(LinkList& L)
{
	LNode* s; int x;
	L = (LinkList)malloc(sizeof(LNode));//创建头结点
	L->next = NULL;//初始为空链表
	scanf("%d", &x);//要插入的结点的值
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));//创建新结点
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	return L;
}

//尾插法
LinkList List_TailInsert(LinkList& L)
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode* s, * r = L;//r是表尾指针
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;//新结点赋值为x
		r->next = s;//r的指针域指向新结点s
		r = s;//r指向新的表尾结点
		scanf("%d", &x);
	}
	r->next = NULL;//尾结点指针为空
	return L;
}

//按序号查找（按位查找）
LNode* GetElem(LinkList L, int i)//查找第i个结点
{
	if (i < 1)
		return NULL;
	int j = 1;
	LNode* p = L->next;//定义p指针指向第一个结点指针
	while ((p != NULL) && (j < i))
	{
		p = p->next;//令p指向下一个结点
		j++;
	}
	return p;
}

//按值查找
LNode* LocateElem(LinkList L, ElemType a)
{
	LNode* p = L->next;
	while ((p != NULL) && (p->data != a))
		p = p->next;
	return p;
}

//求表长
int Length(LinkList L)
{
	LNode* p = L->next;
	int len = 0;
	while (p->data != NULL)
	{
		p = p->next;
		len++;
	}
	return len;
}