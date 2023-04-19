#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//计算1到10的阶乘和
int main()
{
	int i = 1;
	int ret = 1;
	int n = 0;
	int sum = 0;
	for (n = 1; n <= 10;n++)
	{
		ret = 1;
	    for (i = 1; i <=n;i++)
	   {
		    ret = ret * i;
	   }
		sum = sum + ret;
	}
	printf("sum = %d\n", sum);
	return 0;

}
//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d",&n);
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret=%d\n",ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//EOF-文件结束标志	
//	while ((ch = getchar()) != EOF)
////	{
////		putchar(ch);
////	}
//	return 0;
//}