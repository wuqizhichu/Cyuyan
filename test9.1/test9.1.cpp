#include<stdio.h>
#include <malloc.h>
typedef struct lnode {
	int data;
	struct lnode* next;
}lnode, * linklist;

//使单链表中的元素递增有序
int a[5] = { 2,4,1,7,3 };
int n = 5;

void buildlist(linklist& L)
{
	L = (linklist)malloc(sizeof(lnode));
	lnode* s = L->next, * r = L;
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

void sq(linklist& L)
{
	lnode* p = L->next, * r = p->next, * f;
	p->next = NULL;
	p = r;
	while (p)
	{
		r = p->next;
		f = L;
		while  ((f->next != NULL) && (f->next->data < p->data))
		{
			f = f->next;
		}
		p->next = f->next;
		f->next = p;
		p = r;
	}
}

int main()
{
	lnode list;
	lnode* L = &list;
	buildlist(L);
	print(L);
	sq(L);
	print(L);
	return 0;
}