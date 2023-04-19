#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//创建一个数组存放10个整形变量
//	//int arr[10] = { 1, 2, 3, 4 };
//	//char arr1[5] = { 'a', 98 };//存放a,b,0,0,0
//	//char arr2[5] = "ab";//存放a,b,0,0,0,---第三个0是"\0"
//	char arr3[] = "abcdef";
//	printf("%d \n", sizeof(arr3));
//	//sizeof求字符串占用空间，‘\0’包含在内
//	printf("%d \n", strlen(arr3));
//	//strlen求字符串长度，在\0之前就停止，\0不计算在内
//	return 0;
//}

int main()
{
	char arr[] = "abcdef";
	printf("%c\n",arr[3]);
	return 0;
}