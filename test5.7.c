#include<stdio.h>

//����Խ�絼�µ�Ұָ��
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <= 12; i++)
//	{
//		/**p = 1;
//		p++;*/
//		*p++ = i;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p=test();
//	printf("%d\n", *p);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* pc = NULL;//ָ���ʼ�� 
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9---�м�Ԫ�ظ���
//	return 0;
//}


//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = " bite ";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//������Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//������Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//��������ĵ�ַ
//	printf("%p\n", &arr+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i; 
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p=======%p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa�Ƕ���ָ��
//	//int*** pppa = &ppa;//����ָ��
//
//	return 0;
//}

//ָ������-����-���ָ�������
//����ָ��-ָ��
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	/*int* pa = &a;
	int* pb = &b;
	int* pc = &c;*/

	//int arr[10];
	int* arr2[3] = { &a,&b,&c };//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}