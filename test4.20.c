#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void bubble_sort(int arr[],int sz)
{
	//ð�����������=n-1
	int i = 0;
	for (i = 0; i < sz - 1; i++)//sz - 1������
	{
		int flag = 1;//�����ж������Ƿ�����
		//ÿһ����Ҫ�Ƚ��������Ĵ�С�Ĵ�����n-1��
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//sz - 1 - i�ǱȽϴ�С�Ĵ���
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//���ѭ����������ֵ�Ľ�����˵�����鲻������ģ���flag��ֵΪ0
			}
		}
		if (flag == 1);
		{
			break;
		}
	}
}

int main()
{
	//ð������
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//���鴫�ݹ�ȥ����������Ԫ�صĵ�ַ
	bubble_sort(arr, sz);//bubble_sortð��������
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//int test(int x, int y)
//
//{
//
//	int z = x / (y*y);
//	return z;
//
//}
//
//int main()
//
//
//{
//	int  hight = 0;
//
//	int weight = 0;
//
//	/*hight = hight * 100;*/
//
//
//	printf("%s\n", "���������غ����");
//
//	scanf("%d %d", &weight, &hight);
//
//	int BMI = test(weight, hight);
//
//	if (BMI < 18.5)
//
//		printf("%s\n", "ƫ��");
//
//
//	else if (BMI < 20.9)
//
//		printf("%s\n", "����");
//
//	else if (BMI < 24.9)
//
//		printf("%s\n", "����");
//
//	else
//
//		printf("%s\n", "ƫ��");
//
//
//
//	return 0;
//
//}