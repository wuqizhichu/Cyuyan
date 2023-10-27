#include <stdio.h>

//双向冒泡
//void bsort(int a[], int n)
//{
//	//范围的左右两端
//	int left = 0, right = n - 1;
//	//一趟是否交换过 初始化
//	bool flag = true;
//	//循环条件 左<右 并且一趟有交换
//	while (left < right && flag)
//	{
//		//排序前 默认一趟无交换
//		flag = false;
//		//从前向后交换
//		for (int i = left; i < right; i++)
//		{
//			if (a[i] > a[i + 1])
//			{
//				int t = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = t;
//				flag = true;
//			}
//		}
//		right--;
//		//从后向前交换
//		for (int i = right; i > left; i--)
//		{
//			if (a[i] < a[i - 1])
//			{
//				int t = a[i];
//				a[i] = a[i - 1];
//				a[i - 1] = t;
//				flag = true;
//			}
//		}
//		left++;
//	}
//}
//
//int main()
//{
//	int a[10] = { 7,5,9,2,6,4,3,8,1 };
//	bsort(a, 9);
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

void move(int a[], int n)
{
	//查找范围的左右两端
	int i = 0, j = n - 1;
	//循环遍历条件
	while (i < j)
	{
		//从前向后找偶数位置
		while (i < j && a[i] % 2 == 1)
			i++;
		//从后向前找奇数位置
		while (i < j && a[j] % 2 == 0)
			j--;
		//若偶数在奇数前面 交换
		if (i < j)
		{
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
			//更新范围左右端
			i++;
			j--;
		}
	}
}

int main()
{
	int a[10] = { 7,5,9,2,6,8,3,1,4 };
	move(a, 9);
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}