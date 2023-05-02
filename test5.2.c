#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011--->a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111---->b
//
//	//a和b相加
//	//00000000000000000000000000000011----整型提升
//	//00000000000000000000000001111111----整型提升
//	//00000000000000000000000010000010
//
//	char c = a + b;
//	//10000010---->c
//	//11111111111111111111111110000010----补码
//	//11111111111111111111111110000001----反码
//	//10000000000000000000000001111110----原码
//	//-126
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}////int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b * 3;
//	return 0;
//}


//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}////int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
////}int main(){	int i = 1;	int ret = (++i) + (++i) + (++i);	printf("%d\n", ret);	printf("%d\n", i);	return 0;}