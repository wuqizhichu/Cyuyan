#include<stdio.h>
#include <malloc.h>
#include < stdlib.h >
//typedef struct lnode {
//	char data;
//	struct lnode* next;
//}lnode,*linklist;
//
//char a[7] = { 'l','o','a','d','i','n','g' };
//char b[5] = { 'b','e','i','n','g' };
//int n1 = 7;
//int n2 = 5;
//
//void buildlist(linklist& L, char aa[], int n)
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
//		printf("%c ", s->data);
//		s = s->next;
//	}
//	printf("\n");
//}
//
////���㳤��
//int length(linklist L)
//{
//	int n = 0;
//	lnode* s = L->next;
//	while (s)
//	{
//		n++;
//		s = s->next;
//	}
//	return n;
//}
//
//linklist first(linklist L1, linklist L2)
//{
//	int len1 = length(L1);
//	int len2 = length(L2);
//	int dist = abs(len1 - len2);
//	lnode* p = L1->next, * q = L2->next;
//	if (len1 > len2) 
//	{
//		while (dist--)
//			p = p->next;
//	}
//	else
//	{
//		while (dist--)
//			q = q->next;
//	}
//	while (p)
//	{
//		if (p->data != q->data)
//		{
//			p = p->next;
//			q = q->next;
//		}
//		else
//			return p;
//	}
//}
//
//int main()
//{
//	linklist L1, L2;
//	buildlist(L1, a, n1);
//	buildlist(L2, b, n2);
//	print(L1);
//	print(L2);
//	linklist ans = first(L1, L2);
//	printf("%c", ans->data);
//	return 0;
//}

typedef struct lnode {
	int data;
	struct lnode* next;
}lnode,*linklist;
//ɾ������һ�γ��ֵľ���ֵ��ȵĽ��
int a[6] = { 1,2,4,-2,-4,3 };
int n = 6;

void buildlist(linklist& L)
{
	L = (linklist)malloc(sizeof(lnode));
	lnode* s, * r = L;
	for (int i = 0; i < n; i++)
	{
		s = (lnode*)malloc(sizeof(lnode));
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

void same(linklist& L, int n)
{
	lnode* p = L;
	int* q;//������������
	q = (int*)malloc(sizeof(int) * (n + 1));//����ռ�
	for (int i = 0; i < n + 1; i++)
		*(q + i) = 0;//����������ȫ����ʼ��Ϊ0
	int s;//�����ֵ
	lnode* f;//ɾ���ڵ�ʱʹ�õ�ָ��
	while (p->next != NULL)
	{
		s = abs(p->next->data);
		if (*(q + s) == 0)
		{
			*(q + s) = 1;//�������Ԫ���ڸ��������еĶ�ӦֵΪ0�����Ϊ1��ʾ��һ�γ���
			p = p->next;
		}
		else
		{
			f = p->next;
			p->next = f->next;
			free(f);
		}
	}
	free(q);//ɾ����ɺ��ͷŸ�������ռ�
}

int main()
{
	linklist L;
	buildlist(L);
	print(L);
	same(L, 4);
	print(L);
	return 0;
}