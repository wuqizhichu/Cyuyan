#include<stdio.h>

//struct �ṹ��ؼ���  Stu - �ṹ���ǩ  struct Stu - �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};//s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����

typedef struct Stu//typedef���ã���������
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
//
//int main()
//{
//	struct Stu s1 = {"����",20,"1234567890","��"};//s�Ǿֲ��Ľṹ�����
//	Stu s2 = { "��Ϫ",18,"1563452553","Ů" };
//	return 0;
//}

//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct t
//{
//	char ch[10];
//	struct s s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello world";
//	struct t x = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", x.ch);
//	printf("%s\n", x.s.arr);
//	printf("%lf\n", x.s.d);
//	printf("%p\n", x.pc);
//	return 0;
//}

//void Print1(Stu tmp)
//{
//	printf("name:  %s\n", tmp.name);
//	printf("age:   %d\n", tmp.age);
//	printf("tele:  %s\n", tmp.tele);
//	printf("sex:   %s\n", tmp.sex);
//};
//
//
//void Print2(Stu* ps)
//{
//	printf("name:  %s\n", ps->name);
//	printf("age:   %d\n", ps->age);
//	printf("tele:  %s\n", ps->tele);
//	printf("sex:   %s\n", ps->sex);
//};
//
//int main()
//{
//	Stu s = {"����",40,"15598886688","��"};
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
