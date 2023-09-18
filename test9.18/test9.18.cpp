#include <stdio.h>
#define Max 10
//struct stack1 {
//	int data[Max];
//	int top;
//};
//
//struct squeue {
//	int data[Max];
//	int f, r, tag;
//};
//
//bool entersqueue(squeue& s, int x)//Èë¶Óº¯Êı
//{
//	if (s.f == s.r && s.tag == 1)
//	{
//		printf("¶ÓÂú");
//		return false;
//	}
//	s.data[s.r] = x;
//	s.r = (s. r + 1) % Max;
//	s.tag = 1;
//	return true;
//}
//
//int outsqueue(squeue& s, int& x)//³ö¶Óº¯Êı
//{
//	if (s.r == s.f && s.tag == 0)
//	{
//		printf("¶Ó¿Õ");
//		return false;
//	}
//	x = s.data[s.f];
//	s.f = (s.f + 1) % Max;
//	s.tag = 0;
//	return true;
//}
//
//bool enterstack(stack1& t, int x)//½øÕ»º¯Êı
//{
//	if (t.top == Max - 1)
//	{
//		printf("Õ»Âú");
//		return false;
//	}
//	t.data[++t.top] = x;
//	return true;
//}
//
//int outsstack(stack1& t, int& x)
//{
//	if (t.top == -1)
//	{
//		printf("Õ»¿Õ");
//		return false;
//	}
//	x = t.data[t.top--];
//	return true;
//}
//
//void print(squeue s)
//{
//	for (int i = 0; i < Max; i++)
//	{
//		printf("%d ", s.data[s.f]);
//		s.f = (s.f + 1) % Max;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	squeue s;
//	stack1 t;
//	s.f = 0, s.r = 0,s.tag = 0;
//	t.top = -1;
//	for (int i = 0; i < Max; i++)
//	{
//		entersqueue(s, i);
//	}
//	print(s);
//	int x = 0;
//	while (!(s.f == s.r && s.tag == 0));
//	{
//		outsqueue(s, x);
//		enterstack(t, x);
//	}
//	while (!(t.top == -1))
//	{
//		outsstack(t, x);
//		entersqueue(s, x);
//	}
//	print(s);
//	return 0;
//}

struct stack {
	int data[Max];
	int top;
};

bool isempty(stack s)
{
	if (s.top == -1)
		return true;
	else
		return false;
}

bool isfull(stack s)
{
	if (s.top == Max - 1)
		return true;
	else
		return false;
}

bool enterstack(stack& s, char x)
{
	if (isfull(s))
	{
		printf("Õ»Âú");
		return false;
	}
	s.data[++s.top] = x;
	return true;
}

char outstack(stack& s, char x)
{
	if (isempty(s))
	{
		printf("Õ»¿Õ");
		return false;
	}
	x = s.data[s.top--];
	return true;
}

bool isright(char* str)
{
	stack s;
	s.top = -1;
	int i = 0;
	char t = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			enterstack(s, str[i]);
		else if (str[i] == ')')
		{
			outstack(s, t);
			if (t != '(')
				return false;
		}
		else if (str[i] == ']')
		{
			outstack(s, t);
			if (t != '[')
				return false;
		}
		else if (str[i] == '}')
		{
			outstack(s, t);
			if (t != '{')
				return false;
		}
		i++;
	}
	if (isempty(s))
		return true;
	else
		return false;
}

int main()
{
	char str[Max] = { '(',')','[',']','(',')','{','}','[',']' };
	for (char i = 0; i < Max; i++)
	{
		printf("%c ", str[i]);
	}
	printf("\n");
	if (isright(str))
		printf("À¨ºÅ²»Æ¥Åä");
	else
		printf("À¨ºÅÆ¥Åä");
	return 0;
}