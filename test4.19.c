#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//int arr[10] = { 1, 2, 3 };//不完全初始化
//	//char arr2[5] = { 'a', 'b' };
//	//char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n",sizeof(arr4));//
//	//sizeof计算arr4占用空间的大小
//	//放7个元素-char 7*1=7
//	printf("%d\n", strlen(arr4));//
//	//strlen 求字符串的长度
//	//[a,b,c,d,e,f,\0]---strlen求的是\0前的字符数
//	//6个字符
//
//	//int n = 5;
//	//char arr[n];//err
//	return 0;
//}


//1.strlen是求字符串长度的函数，只能求字符串长度--是一个库函数，使用需要头文件
//2.sizeof是计算变量、数组 、类型的大小，单位是字节----是一个操作符
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//strlen算的是\0前的字符数---随机值
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	//printf("%c\n",arr[3]);
//	int i = 0;
//	int len = strlen(arr);
//	//for (i = 0; i < (int)strlen(arr); i++)
//	for (i = 0; i < len; i++)
//	//for (i = 0; i < 6; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d]=%p\n", i, &arr[i]);//%p---打印地址
//		//数组在内存中是连续存放的
//	}
//	return 0;
//}

//二维数组

//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, {4,5,6} };//是一个3行4列的数组：
//	//1 2 3 0
//	//4 5 6 0
//	//0 0 0 0
//
//	//如何打印二维数组中的元素
//	int i = 0;
//	for (i = 0; i < 3; i++)	//确定行数
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");//打印完一行换行
//	}
//	//int arr[][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };
//	//二维数组中的行下标可以省略，但是列下标不能省略
//
//	return 0;
//}

int main()
{
	int arr[3][4] = { { 1, 2, 3 }, { 4, 5, 6 } };//是一个3行4列的数组：

	//如何打印二维数组中的元素地址
	int i = 0;
	for (i = 0; i < 3; i++)	//确定行数
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);
		}
	}
	//二维数组在内存中也是连续存放的
	return 0;
}