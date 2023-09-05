#include <stdio.h>
#include <malloc.h>
typedef struct lnode {
	int data;
	struct lnode* next;
}lnode,*linklist;

////递增次序输出链表元素，释放空间
//int a[6] = { 3,1,7,5,9,6 };
//int n = 6;
//
//void build(linklist& head)
//{
//	head = (linklist)malloc(sizeof(lnode));
//	lnode* s, * r = head;
//	for (int i = 0; i < n; i++)
//	{
//		s = (lnode*)malloc(sizeof(lnode));
//		s->data = a[i];
//		r->next = s;
//		r = s;
//	}
//	r->next = NULL;
//}
//
//void deletemin(linklist& head)
//{
//	while (head->next != NULL)
//	{
//		lnode* r = head, * p = r->next;
//		while (p->next != NULL)
//		{
//			if (p->next->data < r->next->data)
//				r = p;
//			p = p->next;
//		}
//		printf("%d ", r->next->data);
//		lnode* q = r->next;
//		r->next = q->next;
//		free(q);
//	}
//	free(head);
//}
//
//int main() 
//{
//	linklist head;
//	build(head);
//	deletemin(head);
//	return 0;
//}

//
int a[6] = { 2,5,4,7,3,1 };
int n = 6;

void buildlist(linklist& L)
{
	L = (linklist)malloc(sizeof(lnode));
	lnode* s = L->next, * r = L;
	for (int i = 0; i < n; i++)
	{
		s = (lnode*)malloc(sizeof(lnode));
		s->data = a[i];
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

linklist L2;
void cut(linklist& L1)
{
	L2 = (linklist)malloc(sizeof(lnode));
	L2->next = NULL;
	lnode* r1 = L1, * r2 = L2, * p = L1->next;
	int i = 0;
	while (p)
	{
		i++;
		if (i % 2 == 0)
		{
			r2->next = p;
			r2 = p;
		}
		else
		{
			r1->next = p;
			r1 = p;
		}
		p = p->next;
	}
	r1->next = NULL;
	r2->next = NULL;
}

int main()
{
	linklist L1;
	buildlist(L1);
	print(L1);
	cut(L1);
	print(L1);
	print(L2);
	return 0;
}