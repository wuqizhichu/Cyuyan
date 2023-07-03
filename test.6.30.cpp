#define _CRT_SECURE_NO_WARNINGS 1
#define Maxsize 10

typedef struct 
{
	char data[Maxsize];
	int top;
}SqStack;

char str[] = { '(','{','[','}',']','(',')',')' };

//≥ı ºªØ
void InitSqStack(SqStack& S) 
{
	S.top = -1;
}
//≈–’ªø’
bool SqStackEmpty(SqStack S)
{
	if (S.top == -1)
		return true;
	else
		return false;
}
//»Î’ª
bool Push(SqStack& S, char x)
{
	if (S.top == Maxsize - 1)
		return false;
	else
		S.data[++S.top] = x;
}
//∂¡’ª∂•‘™Àÿ
bool Pop(SqStack &S, char & topElem)
{
	if (S.top == -1)
		return false;
	topElem = S.data[S.top];
	return true;
}

bool KHCheck(char str[], int length)
{
	int i = 0;
	SqStack S;
	InitSqStack(S);
	for (i = 0; i < length; i++)
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
			Push(S, str[i]);//◊Û¿®∫≈»Î’ª
		}
		else
		{
			if(SqStackEmpty(S))//…®√ËµΩ”“¿®∫≈£¨«“µ±«∞’ªø’
			return false;
		//∆•≈‰¿®∫≈
		char topElem;
		Pop(S, topElem);
		if (str[i] == ')' && (topElem != '('))
			return false;
		if (str[i] == ']' && (topElem != '['))
			return false;
		if (str[i] == '}' && (topElem != '{'))
			return false;
		}
	}
	return SqStackEmpty(S);
}