#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include<string.h>


//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "XXXXXXX";
//	//               bit\0XXXXX-----"\0"-�ַ���������־
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	//strcpy---�ַ�������strcpy(Ŀ�ĵأ�Դͷ)
//	//strlen---���ַ��������й�
//	return 0;
//}

int main()
{
	char arr[] = "hello world";
	memset(arr, '#', 5);
	printf("%s\n", arr);
	return 0;
}