#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <malloc.h>
#define Maxsize 50
typedef struct LNode
{
	ElemType data;//������
	struct LNode *next;//ָ����
}LNode,*LinkList;

//ͷ�巨
LinkList List_HeadInsert(LinkList& L)
{
	LNode* s; int x;
	L = (LinkList)malloc(sizeof(LNode));//����ͷ���
	L->next = NULL;//��ʼΪ������
	scanf("%d", &x);//Ҫ����Ľ���ֵ
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));//�����½��
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	return L;
}

//β�巨
LinkList List_TailInsert(LinkList& L)
{
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode* s, * r = L;//r�Ǳ�βָ��
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;//�½�㸳ֵΪx
		r->next = s;//r��ָ����ָ���½��s
		r = s;//rָ���µı�β���
		scanf("%d", &x);
	}
	r->next = NULL;//β���ָ��Ϊ��
	return L;
}

//����Ų��ң���λ���ң�
LNode* GetElem(LinkList L, int i)//���ҵ�i�����
{
	if (i < 1)
		return NULL;
	int j = 1;
	LNode* p = L->next;//����pָ��ָ���һ�����ָ��
	while ((p != NULL) && (j < i))
	{
		p = p->next;//��pָ����һ�����
		j++;
	}
	return p;
}

//��ֵ����
LNode* LocateElem(LinkList L, ElemType a)
{
	LNode* p = L->next;
	while ((p != NULL) && (p->data != a))
		p = p->next;
	return p;
}

//���
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