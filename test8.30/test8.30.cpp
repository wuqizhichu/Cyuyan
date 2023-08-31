#include <stdio.h>
#include <malloc.h>
typedef struct lnode {
	int data;
	struct lnode* next;
}lnode,*Linklist;

//反向输出链表元素
int a[4] = { 1,2,3,4 };
int n = 4;

void build(lnode* L)
{
	lnode* s,*r=L;
	r->data = a[0];
	if (n == 1) r->next = NULL;
	else
	{
		for (int i = 1; i < n; i++)
		{
			s = (lnode*)malloc(sizeof(lnode));
			s->data = a[i];
			r->next = s;
			r = s;
		}
		r->next = NULL;
	}
}

void disp(lnode *L)
{
	if (L != NULL)
	{
		disp(L->next);
		printf("%d ", L->data);
	}
	else return;
}

void print(lnode* L)
{
	lnode* s = L;
	while (s)
	{
		printf("%d ", s->data);
		s = s->next;
	}
	printf("\n");
}

int main()
{
	lnode list;
	lnode* L = &list;
	build(L);
	print(L);
	disp(L);
	return 0;
}