#include <stdio.h>
#define Maxsize 50
#define Elemtype  int
typedef struct SqList{
	Elemtype arr[Maxsize] = {3,4,5,2,6,8,4,56,83,1,9};
	int length = 11;
};

bool Min_Del(SqList &s, Elemtype &x)
//删除最小元素，返回值，用最后一个元素填补
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
	printf("原数组：\n");
	for (int i = 1; i < 11; i++)
	{
		printf("%d ", s.arr[i]);
	}
	printf("\n");
	int k = 0;
	if (Min_Del(s, k))
	{
		printf("最小元素：%d\n", k);
		printf("修改后的数组为：\n");
		for (int i = 1; i < 11; i++)
		{
			printf("%d ", s.arr[i]);
		}
	}
	else
		printf("错误\n");
	return 0;
}