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
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	ret = Fac1(n);//������ʽ
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
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	ret = Fac2(n);//�ݹ鷽ʽ
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
//	//��ǰ����ӣ���һ����(a)�͵ڶ�����(b)�ĺ��������������ֵ
//	//�ڶ�����(b)��ֵ��a,��������(c)��ֵ��(b)
//	int a = 1;
//	int b = 1;
//	int c = 1;//n=1 or n=2ʱ��ֵΪ1
//	while (n > 2)
//	{
//		c = a + b;//�����������
//		a = b;
//		b = c;
//		n--;//��ʹ���-1
//	}
//	return c;
//}
//
//int main()
//{
//	//���n��쳲�������
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

