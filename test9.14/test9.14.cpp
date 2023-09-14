#include <stdio.h>
#include <malloc.h>
typedef struct lnode {
	int data;
	struct lnode* next;
}lnode,*linklist;

//��12345678����Ϊ18273645
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
			q = q->next;//���q����һ���ڵ㲻Ϊ�գ���q����һ��
	}
	q = p->next;//��qΪ���ε��׸��ڵ�
	p->next = NULL;//��ǰ��������������ú���
	while (q)
	{
		r = q->next;
		q->next = p->next;
		p->next = q;
		q = r;//���ú���Ԫ��
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