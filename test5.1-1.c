#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	////i = a++||++b||d++;
//	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//a为0为假，后面代码不在运行
//	//1 2 3 4
//
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	////i = a++||++b||d++;
//	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//2 3 3 5
//
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	////i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//a为1为真，后面代码不在运行
//	//2 2 3 4
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	max = (a > b ? a : b);
//
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = 5;
//
//	//b = (a > 5 ? 3 : 5);
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "晓", 20, "952270" };
//	struct Stu* ps = &s1;//结构成员访问
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	return 0;
//}//int main()//{//	return 0;//}int main(){	int a = 0;	int b = 3;	c = a + b;	return 0;}