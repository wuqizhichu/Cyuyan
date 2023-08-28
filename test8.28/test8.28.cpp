#include <stdio.h>
#define Max 50

//查找主元素
//typedef struct Sqlist {
//	int data1[Max] = { 0,5,5,3,5,7,5,5 };
//	//int data2[Max] = { 0,5,5,3,5,1,5,7 };
//	int n;
//};
//
////比对进行元素的“抵消”
//int locate(Sqlist s, int k)
//{
//	int i, count=1,c;//c为假设的主元素
//	c = s.data1[0];//假设第一个元素为主元素
//	for (i = 1; i < s.n; i++)
//	{
//		if (s.data1[i] == c)
//			count++;
//		else if (count > 0)
//			count--;
//		else
//		{
//			c = s.data1[i];//更换主元素，重新计数
//			count = 1;
//		}
//	}
//	if(count>0)
//		for (i = 0; i < s.n; i++)
//		{
//			if (s.data1[i] == c)
//				count++;
//		}
//	if (count > s.n / 2)
//		return c;
//	else
//		return -1;
//}
//
//int main()
//{
//	int cc;
//	Sqlist s;
//	locate(s, cc);
//	printf("%d", cc);
//	return 0;
//}

//查找未出现的最小正整数
int a[4] = { -1,3,5,7 };
int n = 4;
int findmin(int a[])
{
	int b[6] = { 0 };
	for (int i = 0; i < n; i++) {
		if (a[i] > 0 && a[i] <= n + 1)
			b[a[i]] = 1;
	}
	int x = 0;
	for (int i = 1; i < n+2; i++)
	{
		if (b[i] == 0)
			x = i;
		break;
	}
	return x;
}

int main()
{
	printf("%d", findmin(a));
	return 0;
}