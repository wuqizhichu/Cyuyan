#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
//�������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d\n", &a, &b, &c);//3 7 1
//	if (a < b)
//	{
//		int x = a;
//		a = b;
//		b = x;
//	}
//	if (a < c)
//	{
//		int x = a;
//		a = c;
//		c = x;
//	}
//	if (b < c)
//	{
//		int x = b;
//		b = c;
//		c = x;
//	}
//
//	printf("%d %d %d\n",a, b, c);
//	return 0;
//}

//���1-100֮��3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}

//�������������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int x = 0;
//	scanf("%d %d",&m,&n);
//	while (m % n)
//	{
//		x = m%n;
//		m = n;
//		n = x;
//	}
//	printf("%d \n",n);
//	return 0;
//}

//���1000-2000֮�������
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//		//{
//		//	//�ж�y�Ƿ�Ϊ����
//		//	//�ܱ�4���������ܱ�100��������ͨ����
//		//	//�ܱ�400��������������
//		//	if (y % 4 == 0 && y % 100 != 0)
//		//	{
//		//		printf("%d ",y);
//		//		count++;
//		//	}
//		//	else if (y % 400 == 0)
//		//	{
//		//		printf("%d", y);
//		//		count++;
//		//	}
//		//}
//		//printf("\ncount = %d\n", count);
//	{
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//���100-200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�����жϹ���
//		//�Գ���
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d \n",count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�����жϹ���
//		//�Գ���
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d \n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2 )
//	{
//		//�����жϹ���
//		//�Գ���
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d \n", count);
//	return 0;
//}