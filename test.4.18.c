#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//����һ��������10�����α���
//	//int arr[10] = { 1, 2, 3, 4 };
//	//char arr1[5] = { 'a', 98 };//���a,b,0,0,0
//	//char arr2[5] = "ab";//���a,b,0,0,0,---������0��"\0"
//	char arr3[] = "abcdef";
//	printf("%d \n", sizeof(arr3));
//	//sizeof���ַ���ռ�ÿռ䣬��\0����������
//	printf("%d \n", strlen(arr3));
//	//strlen���ַ������ȣ���\0֮ǰ��ֹͣ��\0����������
//	return 0;
//}

int main()
{
	char arr[] = "abcdef";
	printf("%c\n",arr[3]);
	return 0;
}