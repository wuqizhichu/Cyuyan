#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	/*int a = 0;
//	char b = 'w';
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//
//	printf("%d\n", sizeof(b));//1
//	printf("%d\n", sizeof(char));//1
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));*///40
//	//short s = 0;
//	//int a = 10;
//	//printf("%d\n", sizeof(s = a + 5));//2----s�����ͣ�ռ2���ֽ�
//	//printf("%d\n", s);//0----sizeof()�ڲ��ı��ʽ����������
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//~��λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111-----����
//	//11111111111111111111111111111110-----����
//	//10000000000000000000000000000001-----ԭ��-----(-1)
//	printf("%d\n", ~a);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//�ȼӺ���
//	printf("%d\n", a++);//���ú��
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;//(����)ǿ������ת��
//
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}////int main()//{//	int a = 3;//	int b = 5;//	int c = a && b;//	printf("%d\n", c);//	return 0;//}//int main()//{//	int a = 3;//	int b = 2;//	int c = a + b;//	return 0;//}int Winmain(){	int a = 3;	int b = 2;	int c = a + b;	return 0;}