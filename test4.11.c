#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
//三个数从大到小输出
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

//输出1-100之间3的倍数
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

//求两个数的最大公约数
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

//输出1000-2000之间的闰年
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//		//{
//		//	//判断y是否为闰年
//		//	//能被4整除，不能被100整除是普通闰年
//		//	//能被400整除是世纪闰年
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

//输出100-200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//素数判断规则
//		//试除法
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
//		//素数判断规则
//		//试除法
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
//		//素数判断规则
//		//试除法
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