#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	double x = 0.00;
//	double y = 0.00;
//	double z = 0.00;
//	double j = 0.00;
//	double S = 0.00;
//	printf("请输入三角形的边长：\n");
//	scanf("%lf %lf %lf",&x,&y,&z);
//	while (1)
//	{
//		if ((x + y < z) || (y + z < x) || (x + z < y))
//		{
//			printf("输入的三角形边长不合适，请重新输入：\n");
//			scanf("%lf %lf %lf", &x, &y, &z);
//		}
//		else
//		{
//			double p = (x + y + z) / 2;
//			j = p*(p - x)*(p - y)*(p - z);
//			S = sqrt(j);
//			printf("三角形的面积为:%lf\n", S);
//			return S;
//		}
//	}
//}

//int main()
//{
//	int i = 0;
//	printf("请输入一个正整数：\n");
//	scanf("%d", &i);
//	printf("十进制数为：%d\n", i);
//	printf("八进制数为：0%o\t\n", i);
//	printf("十六进制数为：0x%x\t\n", i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("请输入成绩：\n");
//	scanf("%d", &i);
//	if (i<0 && i>100)
//	{
//		printf("输入成绩不合法\n");
//	}
//	else if (i >= 0 && i < 60)
//	{
//		printf("差\n");
//	}
//	else if (i >= 60 && i < 75)
//	{
//		printf("及格\n");
//	}
//	else if (i >= 75 && i < 90)
//	{
//		printf("良好\n");
//	}
//	else if (i >= 90 && i <= 100)
//	{
//		printf("优秀\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("请输入成绩：\n");
//	scanf("%d", &i);
//	if (i<0 && i>100)
//		printf("输入成绩不合法\n");
//	else if (i >= 0 && i < 60)
//		printf("差\n");
//	else if (i >= 60 && i < 75)
//		printf("及格\n");
//	else if (i >= 75 && i < 90)
//		printf("良好\n");
//	else if (i >= 90 && i <= 100)
//		printf("优秀\n");
//	return 0;
//}

//int main()
//{
//	int flag, s;
//	printf("请输入两个整数：");
//	scanf("%d%d", &flag, &s);
//	if (flag==1)
//	{
//		s = s % 3;
//		printf("\ns=%d", s);
//	}
//	else
//	{
//		s = s % 5;
//		printf("\ns=%d", s);
//	}
//	return 0;
//}

//int main()
//{
//	int N = 0;
//	double h = 0.0;
//	printf("请输入楼层数：\n");
//	scanf("%d", &N);
//	h = 3.6 + 2.5 + N*0.3 + (N - 1)*2.4;
//		printf("红灯距离地面的高度为%lf\n", h);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("请输入月份：\n");
//	scanf("%d", &i);
//	if (i == 1)
//		printf("January\n");
//	else if (i == 2)
//		printf("February\n");
//	else if (i == 3)
//		printf("March\n");
//	else if (i == 4)
//		printf("April\n");
//	else if (i == 5)
//		printf("May\n");
//	else if (i == 6)
//		printf("June\n");
//	else if (i == 7)
//		printf("July\n");
//	else if (i == 8)
//		printf("August\n");
//	else if (i == 9)
//		printf("September\n");
//	else if (i == 10)
//		printf("October\n");
//	else if (i == 11)
//		printf("November\n");
//	else if (i == 12)
//		printf("December\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("请输入月份：\n");
//	scanf("%d", &i);
//	switch (1)
//	{
//	case 1:
//		printf("January\n");
//		break;
//	case 2:
//		printf("February\n");
//		break;
//	case 3:
//		printf("March\n");
//		break;
//	case 4:
//		printf("April\n");
//		break;
//	case 5:
//		printf("May\n");
//		break;
//	case 6:
//		printf("June\n");
//		break;
//	case 7:
//		printf("July\n");
//		break;
//	case 8:
//		printf("August\n");
//		break;
//	case 9:
//		printf("September\n");
//		break;
//	case 10:
//		printf("October\n");
//		break;
//	case 11:
//		printf("November\n");
//		break;
//	case 12:
//		printf("December\n");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i=0;
//	int a = 3;
//	int b = 5;
//	int c = 7;
//	printf("请输入一个整数：\n");
//	scanf("%d", &i);
//	if (i % a == 0 && i % b == 0 && i % c == 0)
//		printf("%d能同时被%d %d %d整除\n", i, a, b, c);
//	else if (i%a==0&&i%b==0)
//		printf("%d能同时被%d %d整除\n", i, a, b);
//	else if (i % c == 0 && i % b == 0)
//		printf("%d能同时被%d %d整除\n", i, c, b);
//	else if (i % a == 0 && i % c == 0)
//		printf("%d能同时被%d %d整除\n", i, a, c);
//	else if (i % a == 0)
//		printf("%d能被%d整除\n", i, a);
//	else if (i % b == 0)
//		printf("%d能被%d整除\n", i, b);
//	else if (i % c == 0)
//		printf("%d能被%d整除\n", i, c);
//	else
//		printf("%d不能被3、5、7中的任何一个数整除\n");
//	return 0;
//}


