#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>


//void main()
//{
//	float score=0.0;
//	float min = 0.0;
//	float max = 0.0;
//	float sum=0.0;
//	int i = 0;
//	while (score!=-1)
//	{
//		scanf("%f", &score);
//		sum = sum + score;
//		i++;
//		if (score > max)
//			max = score;
//		else if(score < min)
//			min = score;
//		
//	}
//	sum = sum - max - min;
//	printf("\nFinal score is %6.2f", sum / (i - 2));
//}

//int main()
//{
//	int a = 16;
//	//>>--���Ʋ�����
//	//�ƶ����Ƕ�����λ
//	int b = a >> 2;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//�����Ķ����Ʊ�ʾ�У�ԭ�룬���룬����
//	//�洢���ڴ��еĶ��ǲ���
//	//10000000000000000000000000000001---ԭ��
//	//11111111111111111111111111111110---����----����λ���䣬����λ��λȡ��
//	//11111111111111111111111111111111---����----����+1
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//����---��߶������ұ߲�0
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//&--��������λ��
//	int a = 3;
//	int b = 5;
//	//a   011
//	//b   101
//	//c   001----һ��Ϊ0��Ϊ0��ͬʱΪ1��Ϊ1
//	int c = a&b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	////|--��������λ��
//	//int a = 3;
//	//int b = 5;
//	////a   011
//	////b   101
//	////c   111----һ��Ϊ1��Ϊ1��ͬʱΪ0��Ϊ0
//	//int c = a|b;
//
//
//	int a = 3;
//	int b = 5;
//	int c = a^b;
//	//a   011
//	//b   101
//	//c   110----��ͬΪ0����ͬΪ1
//	printf("%d\n", c);
//	return 0;
//}

//��ʹ�õ���������������������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//�Ӽ���---���ܻ����
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//���
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	return 0;
//}

//��һ�������ڴ��ж�������1�ĸ���
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//����num�Ĳ������м���1
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}


