#include <stdio.h>
#define Max 10
struct stack {
	char data[Max];
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

void outstack(stack& s, char& x)
{
	if (isempty(s))
	{
		printf("Õ»¿Õ");
	}
	else
	{
		x = s.data[s.top--];
	}
}

void sort(char str[],char c)
{
	stack s;
	s.top = -1;
	char ans[Max + 1];
	int j = 0;
	for (int i = 0; i < Max; i++)
	{
		if (str[i] == 'H')
			enterstack(s, str[i]);
		else
			ans[j++] = str[i];
	}
	while (!isempty(s))
	{
		outstack(s, c);
		ans[j++] = c;
	}
	for (int i = 0; i < Max; i++)
	{
		printf("%c ", ans[i]);
	}
	printf("\n");
}

int main()
{
	char c = 0;
	char str[Max] = "HSHSHHSHS";
	for (int i = 0; i < Max; i++)
	{
		printf("%c ", str[i]);
	}
	printf("\n");
	sort(str,c);
	return 0;
}