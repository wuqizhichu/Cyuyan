#include <stdio.h>
#define Max 50

//typedef struct Sqlist {
//	int a[Max] = { 1,2,3,3,3,4,5,6,6,7,8,8,9,9 };
//	int length = 14;
//};

//删除有序表中重复元素

//bool Delete(Sqlist& s)
//{
//	if (s.length == 0)
//		return false;
//	int i, j;
//	for (i = 0, j = 1;j < s.length; j++)
//	{
//		if (s.a[i] != s.a[j])
//		{
//			s.a[i + 1] = s.a[j];
//			i++;
//		}
//	}
//	/*for (i = 0, j = 1; j < s.length; j++)
//	{
//		if (s.a[i] != s.a[j])
//			s.a[++i] = s.a[j];
//	}
//	s.length = i + 1;
//	return true;*/
//	s.length = i + 1;
//}
//
//int main()
//{
//	Sqlist s;
//	int i = 0;
//	for (i = 0; i < s.length; i++)
//	{
//		printf("%d ", s.a[i]);
//	}
//	printf("\n");
//	Delete(s);
//	for (i = 0; i < s.length; i++)
//	{
//		printf("%d ", s.a[i]);
//	}
//	return 0;
//}

//将两个有序表合并成一个有序表

typedef struct Sqlist {
	int data[Max];
	int length;
};

bool ADD(Sqlist s, Sqlist t,Sqlist &v)
{
	int i = 0, j = 0, k = 0;
	if (v.length < s.length + t.length)
		return false;
	for (i = 0, j = 0, k = 0; i < s.length && j < t.length;)
	{
		if (s.data[i] <= t.data[j])
			v.data[k++] = s.data[i++];
		else
			v.data[k++] = t.data[j++];
	}
	while (i < s.length)
		v.data[k++] = s.data[i++];
	while (j < t.length)
		v.data[k++] = t.data[j++];
	v.length = s.length + t.length;
	return true;
}

int main()
{
	Sqlist s = { {2,4,5,6,7,7},6 };
	Sqlist t = { {1,2,3,5,5,6,7},7 };
	Sqlist v;
	v.length = 20;
	int i = 0;
	for (i = 0; i < s.length; i++)
	{
		printf("%d ", s.data[i]);
	}
	printf("\n");
	for (i = 0; i < t.length; i++)
	{
		printf("%d ", t.data[i]);
	}
	printf("\n");
	ADD(s, t, v);
	for (i = 0; i < v.length; i++)
	{
		printf("%d ", v.data[i]);
	}
	printf("\n");
	printf("v.length=%d", v.length);
	return 0;
}