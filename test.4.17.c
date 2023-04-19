#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	ret = Fac1(n);//函数方式
//	printf("%d\n",ret);
//
//	return 0;
//}


//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac2(n - 1);
//}
//
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	ret = Fac2(n);//递归方式
//	printf("%d\n", ret);
//
//	return 0;
//}


//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(n)
//{
//	//从前往后加，第一个数(a)和第二个数(b)的和求出第三个数的值
//	//第二个数(b)赋值给a,第三个数(c)赋值给(b)
//	int a = 1;
//	int b = 1;
//	int c = 1;//n=1 or n=2时，值为1
//	while (n > 2)
//	{
//		c = a + b;//求出第三个数
//		a = b;
//		b = c;
//		n--;//求和次数-1
//	}
//	return c;
//}
//
//int main()
//{
//	//求第n个斐波那契数
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

