#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//�����ݹ�

//������ѭ���ĵ����Լ�---ջ���
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//��˳���ӡ1234��ÿһ������

//void print(int n)//1234
//{
//	if (n > 9)//�����ݹ�ı�Ҫ����
//	{
//		print(n/10);//ÿ�γ�10����λ��              123      12     1
//	}                   
//	printf("%d ",n%10);//n%10----��ӡ���һλ����     1       2     3     4              
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);//print��һ������
//	return 0;
//}

#include <string.h>


//int my_strlen(char* str)//ʹ��str����arr��������Ԫ�صĵ�ַ
//{
//	//��strָ���һ��Ԫ�أ��������\0,��count+1��strָ����һ��Ԫ�أ�ֱ��\0
//	int count = 0;
//	while (*str != '\0')//�ж�str�Ƿ�ָ��\0----if��䲻��ѭ����ʹ��whileѭ��
//	{
//		count++;//Ԫ�ظ���+1
//		str++;//strָ����һ��Ԫ��
//	}
//	return count;
//}


//��my_strlen("bit")
//�ж�strָ��ĵ�һ��Ԫ���ǲ���\0��������ǣ���������һ��Ԫ�أ�����ǣ���+1��str�ж���һ��Ԫ��
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
//3

//�ݹ�ķ���
int my_strlen(char* str)
{
	//����ʵ��
	if (*str != '\0')//�ж�strָ���Ԫ���ǲ���\0
		return 1+my_strlen(str+1);//������ǣ��ַ�������+1
	else
		return 0;
}

int main()
{
	char arr[] = "wuqi";
	//int len = strlen(arr);//���ַ��γ���
	//printf("%d\n", len);
	//ģ��ʵ��strlen����
	int len = my_strlen(arr);//���ݹ�ȥ�Ĳ�����arr���飬��������arr����Ԫ�صĵ�ַ
	printf("len=%d\n", len);
	return 0;
}