#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include<string.h>


//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "XXXXXXX";
//	//               bit\0XXXXX-----"\0"-字符串结束标志
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	//strcpy---字符串拷贝strcpy(目的地，源头)
//	//strlen---与字符串长度有关
//	return 0;
//}

int main()
{
	char arr[] = "hello world";
	memset(arr, '#', 5);
	printf("%s\n", arr);
	return 0;
}