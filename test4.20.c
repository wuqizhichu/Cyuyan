#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void bubble_sort(int arr[],int sz)
{
	//冒泡排序的趟数=n-1
	int i = 0;
	for (i = 0; i < sz - 1; i++)//sz - 1是趟数
	{
		int flag = 1;//用来判断数组是否有序
		//每一趟需要比较两个数的大小的次数是n-1次
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//sz - 1 - i是比较大小的次数
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//如果循环进行了数值的交换，说明数组不是有序的，给flag赋值为0
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
	//冒泡排序
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//数组传递过去的是数组首元素的地址
	bubble_sort(arr, sz);//bubble_sort冒泡排序函数
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
//	printf("%s\n", "请输入体重和身高");
//
//	scanf("%d %d", &weight, &hight);
//
//	int BMI = test(weight, hight);
//
//	if (BMI < 18.5)
//
//		printf("%s\n", "偏瘦");
//
//
//	else if (BMI < 20.9)
//
//		printf("%s\n", "苗条");
//
//	else if (BMI < 24.9)
//
//		printf("%s\n", "适中");
//
//	else
//
//		printf("%s\n", "偏胖");
//
//
//
//	return 0;
//
//}