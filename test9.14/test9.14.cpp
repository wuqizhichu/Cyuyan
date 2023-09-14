#include <stdio.h>
#include <malloc.h>
typedef struct lnode {
	int data;
	struct lnode* next;
}lnode,*linklist;

//将12345678逆置为18273645
int a[8] = { 1,2,3,4,5,6,7,8 };
int n = 8;

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

void newlist(linklist& L)
{
	lnode* p, * q, * r, * l;
	p = L, q = L;
	while (q->next!=NULL)
	{
		p = p->next;
		q = q->next;
		if (q->next != NULL)
			q = q->next;//如果q的下一个节点不为空，则q再走一步
	}
	q = p->next;//令q为后半段的首个节点
	p->next = NULL;//将前半段拿下来，逆置后半段
	while (q)
	{
		r = q->next;
		q->next = p->next;
		p->next = q;
		q = r;//逆置后半段元素
	}
	l = L->next;
	q = p->next;
	p->next = NULL;
	while (q)
	{
		r = q->next;
		q->next = l->next;
		l->next = q;
		l = q->next;
		q = r;
	}
}

int main()
{
	linklist L;
	buildlist(L);
	print(L);
	newlist(L);
	print(L);
	return 0;
}