#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//int arr[10] = { 1, 2, 3 };//����ȫ��ʼ��
//	//char arr2[5] = { 'a', 'b' };
//	//char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n",sizeof(arr4));//
//	//sizeof����arr4ռ�ÿռ�Ĵ�С
//	//��7��Ԫ��-char 7*1=7
//	printf("%d\n", strlen(arr4));//
//	//strlen ���ַ����ĳ���
//	//[a,b,c,d,e,f,\0]---strlen�����\0ǰ���ַ���
//	//6���ַ�
//
//	//int n = 5;
//	//char arr[n];//err
//	return 0;
//}


//1.strlen�����ַ������ȵĺ�����ֻ�����ַ�������--��һ���⺯����ʹ����Ҫͷ�ļ�
//2.sizeof�Ǽ������������ �����͵Ĵ�С����λ���ֽ�----��һ��������
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//strlen�����\0ǰ���ַ���---���ֵ
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
//		printf("arr[%d]=%p\n", i, &arr[i]);//%p---��ӡ��ַ
//		//�������ڴ�����������ŵ�
//	}
//	return 0;
//}

//��ά����

//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, {4,5,6} };//��һ��3��4�е����飺
//	//1 2 3 0
//	//4 5 6 0
//	//0 0 0 0
//
//	//��δ�ӡ��ά�����е�Ԫ��
//	int i = 0;
//	for (i = 0; i < 3; i++)	//ȷ������
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");//��ӡ��һ�л���
//	}
//	//int arr[][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };
//	//��ά�����е����±����ʡ�ԣ��������±겻��ʡ��
//
//	return 0;
//}

int main()
{
	int arr[3][4] = { { 1, 2, 3 }, { 4, 5, 6 } };//��һ��3��4�е����飺

	//��δ�ӡ��ά�����е�Ԫ�ص�ַ
	int i = 0;
	for (i = 0; i < 3; i++)	//ȷ������
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n", i,j,&arr[i][j]);
		}
	}
	//��ά�������ڴ���Ҳ��������ŵ�
	return 0;
}