#include <malloc.h>
#include <stdio.h>
typedef struct lnode {
	int data;
	struct lnode* next;
}lnode,*linklist;

int a[5] = { 1,2,3,4,5 };
int n = 5;

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

int find(linklist L, int k)
{
	lnode* p = L->next, * q = L->next;
	int num = 0;
	while (p)
	{
		if (num < k) num++;
		else q = q->next;
		p = p->next;
	}
	if (num < k)
		return 0;
	else
	{
		printf("%d", q->data);
		printf("\n");
		return 1;
	}
}

int main()
{
	linklist L;
	buildlist(L);
	print(L);
	find(L, 2);
	printf("%d ", find(L, 2));
	return 0;
}