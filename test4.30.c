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
//	//>>--右移操作符
//	//移动的是二进制位
//	int b = a >> 2;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//整数的二进制表示有：原码，反码，补码
//	//存储在内存中的都是补码
//	//10000000000000000000000000000001---原码
//	//11111111111111111111111111111110---反码----符号位不变，其他位按位取反
//	//11111111111111111111111111111111---补码----反码+1
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//左移---左边丢弃，右边补0
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//&--按二进制位与
//	int a = 3;
//	int b = 5;
//	//a   011
//	//b   101
//	//c   001----一个为0即为0，同时为1才为1
//	int c = a&b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	////|--按二进制位或
//	//int a = 3;
//	//int b = 5;
//	////a   011
//	////b   101
//	////c   111----一个为1即为1，同时为0才为0
//	//int c = a|b;
//
//
//	int a = 3;
//	int b = 5;
//	int c = a^b;
//	//a   011
//	//b   101
//	//c   110----相同为0，不同为1
//	printf("%d\n", c);
//	return 0;
//}

//不使用第三个变量，交换两个数
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//加减法---可能会溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//异或
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	return 0;
//}

//求一个数在内存中二进制中1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//计算num的补码中有几个1
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


