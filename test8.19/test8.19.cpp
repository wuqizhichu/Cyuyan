#include <stdio.h>
#define Maxsize 50
#define Elemtype  int
typedef struct SqList{
	Elemtype arr[Maxsize] = {3,4,5,2,6,8,4,56,83,1,9};
	int length = 11;
};

bool Min_Del(SqList &s, Elemtype &x)
//ɾ����СԪ�أ�����ֵ�������һ��Ԫ���
{
	if (s.length == 0)
		return false;
	int min = s.arr[0];
	int flag = 0;
	for (int i = 1; i < s.length; i++)
	{
		if (s.arr[i] < min)
		{
			min = s.arr[i];
			flag = i;
		}
	}
	x = s.arr[flag];
	s.arr[flag] = s.arr[s.length - 1];
	return true;
}

int main()
{
	SqList s;
	printf("ԭ���飺\n");
	for (int i = 1; i < 11; i++)
	{
		printf("%d ", s.arr[i]);
	}
	printf("\n");
	int k = 0;
	if (Min_Del(s, k))
	{
		printf("��СԪ�أ�%d\n", k);
		printf("�޸ĺ������Ϊ��\n");
		for (int i = 1; i < 11; i++)
		{
			printf("%d ", s.arr[i]);
		}
	}
	else
		printf("����\n");
	return 0;
}