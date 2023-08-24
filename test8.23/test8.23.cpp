//删除指定区间元素
#include <stdio.h>
#define Max 50
//typedef struct SqList {
//	int a[Max] = { 1,2,3,4,4,5,6,7,7,8,9,9,10,23 };
//	int length = 14;
//};

//bool DeleteList(SqList& L, int s, int t)
//{
//	int i, j;
//	if (s >= t || L.length == 0)
//		return false;
//	for (i = 0; i < L.length && L.a[i] < s; i++)//大于等于s的第一个元素
//
//	if (i >= L.length)
//		return false;
//
//	for (j = i; j < L.length && L.a[j] <= t; j++)//大于t的第一个元素
//
//	for (; j < L.length; i++, j++)
//		L.a[i] = L.a[j];
//
//	L.length =i+1;
//	return true;
//}
//
//int main()
//{
//	SqList L;
//	int i = 0;
//	for (i = 0; i < L.length; i++)
//	{
//		printf("%d ", L.a[i]);
//	}
//	printf("\n");
//	DeleteList(L, 4, 9);
//	for (i = 0; i < L.length; i++)
//	{
//		printf("%d ", L.a[i]);
//	}
//	printf("%d ", L.length);
//	return 0;
//}


//无序表删除指定区间元素
typedef struct Sqlist {
	int a[Max] = { 3,4,6,5,7,3,9,5 };
	int length = 8;
};

bool Deletelist(Sqlist& L, int s, int t)
{
	if (L.length == 0 || s >= t)
		return false;
	int i = 0;
	int k = 0;
	for (i = 0; i < L.length; i++)
	{
		if (L.a[i] >= s && L.a[i] <= t)
			k++;
		else
		L.a[i - k] = L.a[i];
	}
	L.length = L.length - k;
}

int main()
{
	int i = 0;
	Sqlist L;
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", L.a[i]);
	}
	printf("\n");
	Deletelist(L,4,7);
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", L.a[i]);
	}
	return 0;
}