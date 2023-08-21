#include <stdio.h>
#define Max 50

//typedef struct SqList{
//	int arr[Max] = { 1,2,3,4,5,6,7,8 };
//	int length = 8;
//};
//
//void JH(SqList& s) {
//	int i, j;
//	for (i = 0, j = s.length - 1; i < j; i++, j--)
//	{
//		int tmp = 0;
//		tmp = s.arr[i];
//		s.arr[i] = s.arr[j];
//		s.arr[j] = tmp;//交换第一个和最后一个元素
//	}
//}
//
//int main()
//{
//	SqList s;
//	printf("原数组\n");
//	int i = 0;
//	for (i = 0; i <= s.length - 1; i++)
//	{
//		printf("%d ", s.arr[i]);
//	}
//	printf("\n");
//	JH(s);
//	printf("逆置后数组\n");
//	for (i = 0; i <= s.length - 1; i++)
//	{
//		printf("%d ", s.arr[i]);
//	}
//	return 0;
//}

typedef struct SqList {
	int arr[Max] = { 5,2,0,1,3,1,4,1,3,1,4 };
	int length = 11;
};

void ListDelete(SqList &s,int x)
{
	int k = 0;//记录x元素出现的次数
	for (int i = 0; i < s.length - 1; i++)
	{
		if (s.arr[i] == x)
			k++;
		else
			s.arr[i - k] = s.arr[i];
	}
	s.length = s.length - k;
}

int main()
{
	SqList s;
	int i = 0;
	for (i = 0; i < s.length - 1; i++)
	{
		printf("%d ", s.arr[i]);
	}
	printf("\n");
	ListDelete(s, 1);
	for (i = 0; i < s.length - 1; i++)
	{
		printf("%d ", s.arr[i]);
	}
	return 0;
}