#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//��дһ����������ĳ�������������Σ����δ�����˳�����

int main()

{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺>");
	scanf("%s",password);    //%s--�ַ���
	    if (strcmp(password, "962464")==0)//strcmp�⺯���������ж��ַ����Ƿ����
	   {
		     printf("������ȷ,��½�ɹ�\n");
		     break;
	   }
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	printf("������������˳�����\n");
	return 0;
}
//int main()
//{
//	//���1-10
//	int i = 1;
//	do
//	{
//		printf("%d ", i );
//		i++;
//	} while (i <= 10);
//	return 0;
//}