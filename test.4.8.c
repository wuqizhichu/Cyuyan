#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//编写一个输入密码的程序，最多输入三次，三次错误后退出程序

int main()

{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
	scanf("%s",password);    //%s--字符串
	    if (strcmp(password, "962464")==0)//strcmp库函数，用来判断字符串是否相等
	   {
		     printf("密码正确,登陆成功\n");
		     break;
	   }
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	printf("三次密码错误，退出程序\n");
	return 0;
}
//int main()
//{
//	//输出1-10
//	int i = 1;
//	do
//	{
//		printf("%d ", i );
//		i++;
//	} while (i <= 10);
//	return 0;
//}