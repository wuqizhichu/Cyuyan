#include<stdio.h>
#define Max 10
typedef struct {
	int data[Max];
	int f, r, tag;//f,r,tagͷָ�룬βָ�룬�жϱ�׼
}squeue;

bool enters(squeue& s, int x)//��Ӻ���
{
	if (s.f == s.r && s.tag == 1)
	{
		printf("����");
		return false;
	}
	s.data[s.r] = x;
	printf("%d ", s.data[s.r]);
	s.r = (s.r + 1) % Max;
	s.tag = 1;
	return true;
}

int outs(squeue& s, int x)//���Ӻ���
{
	if (s.f == s.r && s.tag == 0)
	{
		printf("�ӿ�");
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