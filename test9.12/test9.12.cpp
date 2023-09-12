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
////计算长度
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
//删除除第一次出现的绝对值相等的结点
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
	int* q;//创建辅助数组
	q = (int*)malloc(sizeof(int) * (n + 1));//分配空间
	for (int i = 0; i < n + 1; i++)
		*(q + i) = 0;//将整形数组全部初始化为0
	int s;//存绝对值
	lnode* f;//删除节点时使用的指针
	while (p->next != NULL)
	{
		s = abs(p->next->data);
		if (*(q + s) == 0)
		{
			*(q + s) = 1;//如果链表元素在辅助数组中的对应值为0，则变为1表示第一次出现
			p = p->next;
		}
		else
		{
			f = p->next;
			p->next = f->next;
			free(f);
		}
	}
	free(q);//删除完成后释放辅助数组空间
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