#include <stdio.h>
#include <malloc.h>
typedef struct lnode {
	char data;
	struct lnode* next;
}lnode,*linklist;
//�ж������Ƿ�Ϸ�
//int n;
//
//bool isok(char s[])
//{
//	int I = 0, O = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (s[i] == 'I')
//			I++;
//		else
//			O++;
//		if (O > I)
//			return false;
//	}
//	if (O == I)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	char s[8] = { 'I','O','I','I','O','I','O','O' };
//	n = 8;
//	if (isok(s))
//		printf("�Ϸ�");
//	else
//		printf("���Ϸ�");
//	return 0;
//}

//�ж�����Ԫ���Ƿ�Գ�
//char a[8] = { 'y','y','x','y','y','x','y','y' };
//int n = 8;
//
//void buildlist(linklist& L)
//{
//	L = (linklist)malloc(sizeof(lnode));
//	lnode* s, * r = L;
//	for (int i = 0; i < n; i++)
//	{
//		s = (lnode*)malloc(sizeof(lnode));
//		s->data = a[i];
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
//bool isok(linklist L, int n)
//{
//	char *str=new char[n/2];
//	lnode* p = L->next;
//	int i;
//	for (i = 0; i < n / 2; i++)
//	{
//		str[i] = p->data;
//		p = p->next;
//	}
//	i--;//--��iָ��ǰһ��ĺ�һ��Ԫ��
//	if (n % n / 2 != 0)//�����������p������һλ�������εĵ�һ��Ԫ��
//		p = p->next;
//	while (p && p->data == str[i])//p��Ϊ��ͬʱp��ֵ��ջ��ֵ���
//	{
//		i--;
//		p = p->next;
//	}
//	if (i == -1)
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	linklist L;
//	buildlist(L);
//	print(L);
//	if (isok(L, 8))
//		printf("�Ϸ�");
//	else
//		printf("���Ϸ�");
//	return 0;
//}

