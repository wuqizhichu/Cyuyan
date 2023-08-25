#include<stdio.h>
#define Max 50

//��һ�������е��������λ�û���

//typedef struct Sqlist {
//	int a[Max] = { 1,2,3,4,5,6,7 };
//	int length = 7;
//};
//
//void reverse(Sqlist& s, int left, int right)//���ñ��е�Ԫ��
//{
//	for (int i = left; i <=(left + right) / 2; i++)
//	{
//		int t = s.a[i];
//		s.a[i] = s.a[left + right - i];
//		s.a[left + right - i] = t;
//	}
//}
//
//void print(Sqlist s)
//{
//	for (int i = 0; i < s.length; i++)
//		printf("%d ", s.a[i]);
//	printf("\n");
//}
//
//void change(Sqlist& s, int m, int n)
//{
//	print(s);
//	reverse(s, 0, m + n - 1);
//	print(s);
//	reverse(s, 0, n - 1);
//	print(s);
//	reverse(s, n, m + n - 1);
//	print(s);
//}
//
//int main()
//{
//	Sqlist s;
//	change(s, 3, 4);
//	return 0;
//}



//�ڵ���������в���һ��Ԫ�أ����ҵ������һ��Ԫ�ؽ�������δ�ҵ������Ԫ��ʹ����������
typedef struct Sqlist {
	int a[Max] = { 1,2,4,6,8,9,10};
	int length = 7;
};
//
//bool locate(Sqlist& s, int x)
////��������
//{
//	for (int i = 0; i < s.length; i++)
//	{
//		if (s.a[i] == x)
//		{
//			int t = s.a[i];
//			s.a[i] = s.a[i + 1];
//			s.a[i + 1] = t;
//			return true;
//		}
//	}
//	return false;
//}
//
//bool insert(Sqlist& s, int x)
//{
//	int j;
//	for (j = s.length-1; s.a[j] > x; j--)
//	{
//		s.a[j+1] = s.a[j];	
//	}
//	s.a[j + 1] = x;
//	s.length++;
//	return true;
//}
//
void print(Sqlist s)
{
	for (int i = 0; i < s.length; i++)
	{
		printf("%d ", s.a[i]);
	}
	printf("\n");
}
//
//int main()
//{
//	Sqlist s;
//	print(s);
//	int flag = false;
//	locate(s, 3);
//	if (flag == false)
//	{
//		insert(s, 3);
//	}
//	print(s);
//	printf("%d", s.length);
//	return 0;
//}

//���ֲ���

void find(Sqlist& s, int x)
{
	int left = 0;
	int right = s.length - 1;
	int mid;
	while (left <= right)
	//���ֲ���
	{
		int mid = (left + right) / 2;
		if ((s.a[mid] == x)&&(mid!=s.length-1))
		{
			int t = s.a[mid];
			s.a[mid] = s.a[mid + 1];
			s.a[mid + 1] = t;
			break;
		}
		else if (s.a[mid] < x)
			left = mid + 1;
		else if (s.a[mid] > x)
			right = mid - 1;
	}
	if (right<left)
	{
		int i;
		for (i = s.length-1; i > right; i--)
		{
			s.a[i] = s.a[i - 1];
		}
		s.a[i + 1] = x;
		s.length++;
	}
}

int main()
{
	Sqlist s;
	print(s);
	find(s, 8);
	print(s);
	/*find(s, 7);
	print(s);*/
	return 0;
}