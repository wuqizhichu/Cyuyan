#include <stdio.h>
#include <malloc.h>
typedef struct lnode {
	char data;
	struct lnode* next;
}lnode,*linklist;
//判断序列是否合法
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
//		printf("合法");
//	else
//		printf("不合法");
//	return 0;
//}

//判断链表元素是否对称
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
//	i--;//--后i指向前一半的后一个元素
//	if (n % n / 2 != 0)//如果是奇数，p往后移一位，到后半段的第一个元素
//		p = p->next;
//	while (p && p->data == str[i])//p不为空同时p的值和栈的值相等
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
//		printf("合法");
//	else
//		printf("不合法");
//	return 0;
//}

