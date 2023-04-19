#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//函数递归

//函数死循环的调用自己---栈溢出
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//按顺序打印1234的每一个数字

//void print(int n)//1234
//{
//	if (n > 9)//函数递归的必要条件
//	{
//		print(n/10);//每次除10减少位数              123      12     1
//	}                   
//	printf("%d ",n%10);//n%10----打印最后一位数字     1       2     3     4              
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);//print是一个函数
//	return 0;
//}

#include <string.h>


//int my_strlen(char* str)//使用str接收arr数组中首元素的地址
//{
//	//令str指向第一个元素，如果不是\0,则count+1，str指向下一个元素，直到\0
//	int count = 0;
//	while (*str != '\0')//判断str是否指向\0----if语句不能循环，使用while循环
//	{
//		count++;//元素个数+1
//		str++;//str指向下一个元素
//	}
//	return count;
//}


//求my_strlen("bit")
//判断str指向的第一个元素是不是\0，如果不是，则至少有一个元素，如果是，则+1，str判断下一个元素
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
//3

//递归的方法
int my_strlen(char* str)
{
	//代码实现
	if (*str != '\0')//判断str指向的元素是不是\0
		return 1+my_strlen(str+1);//如果不是，字符串长度+1
	else
		return 0;
}

int main()
{
	char arr[] = "wuqi";
	//int len = strlen(arr);//求字符段长度
	//printf("%d\n", len);
	//模拟实现strlen函数
	int len = my_strlen(arr);//传递过去的并不是arr数组，而是数组arr的首元素的地址
	printf("len=%d\n", len);
	return 0;
}