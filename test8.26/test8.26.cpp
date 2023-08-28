#include <stdio.h>
#define Max 50

//将一个表中的数据循环左移p个位置
//typedef struct Sqlist {
//	int a[Max] = { 1,2,3,4,5,6,7,8 };
//	int length = 8;
//};
//
//void move(Sqlist& s,int l,int r)//逆置函数
//{
//	for (int i = l;i<=(l+r)/2;i++)
//	{
//		int t = s.a[i];
//		s.a[i] = s.a[(l+r)-i];
//		s.a[(l+r)-i] = t;
//	}
//}
//
//void print(Sqlist s)//打印函数
//{
//	for (int i = 0; i < s.length; i++)
//	{
//		printf("%d ", s.a[i]);
//	}
//	printf("\n");
//}
//
//void change(Sqlist s,int left)
//{
//	move(s, 0, s.length - 1);
//	print(s);
//	move(s, 0, s.length-left-1);
//	print(s);
//	move(s, s.length-left, s.length - 1);
//	print(s);
//}
//
//int main()
//{
//	Sqlist s;
//	print(s);
//	change(s, 2);
//	return 0;
//}

//找出两个等长序列的中位数
//struct Sqlist {
//	int data[Max];
//	int length;
//};
//
//int Find_M(Sqlist s, Sqlist t,int &k)
//{
//	int i, j;
//	int flag = 0;
//	for (i = 0, j = 0,k=0; k < s.length-1;k++)
//	{
//		if (s.data[i] <= t.data[j])
//		{
//			i++;
//			flag = 0;
//		}
//		else
//		{
//			j++;
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//		return k = t.data[i];
//	else
//		return k =s.data[i];
//}
//
//void print(Sqlist s)
//{
//	for (int i = 0; i < s.length; i++)
//	{
//		printf("%d ", s.data[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int k;
//	Sqlist s = { {1,3,5,7,9},5 };
//	Sqlist t = { {2,4,6,8,10},5 };
//	Find_M(s,t,k);
//	printf("%d ", k);
//	return 0;
//}