#include<stdio.h>
#define Max 10
typedef struct {
	int data[Max];
	int f, r, tag;//f,r,tag头指针，尾指针，判断标准
}squeue;

bool enters(squeue& s, int x)//入队函数
{
	if (s.f == s.r && s.tag == 1)
	{
		printf("队满");
		return false;
	}
	s.data[s.r] = x;
	printf("%d ", s.data[s.r]);
	s.r = (s.r + 1) % Max;
	s.tag = 1;
	return true;
}

int outs(squeue& s, int x)//出队函数
{
	if (s.f == s.r && s.tag == 0)
	{
		printf("队空");
		return false;
	}
	x = s.data[s.f];
	printf("%d ", s.data[s.f]);
	s.f = (s.f + 1) % Max;
	s.tag = 0;
	return true;
}

int main()
{
	squeue s;
	s.f = 0, s.r = 0, s.tag = 0;
	for (int i = 0; i < 10; i++)
	{
		enters(s, i);
	}
	printf("\n");
	enters(s, 1);
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		outs(s, i);
	}
	printf("\n");
	outs(s, 1);
	return 0;
}