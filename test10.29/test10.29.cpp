#include<stdio.h>

//在数组中查找第K小的元素
//int min_k(int a[], int left, int right, int k)
//{
//	//快速排序划分算法
//	//i一开始指向left位置
//	int i = left;
//	//从第二个位置开始遍历到结束
//	int p = a[left];
//	for (int j = left + 1; j <= right; j++)
//	{
//		//如果小于基准值
//		if (a[j] < p)
//		{
//			int t = a[i + 1];
//			a[i + 1] = a[j];
//			a[j] = t;
//		}
//	}
//	//将基准元素插入到最终的位置
//	int t = a[i];
//	a[i] = a[left];
//	a[left] = t;
//	//若最后基准位置为K 基准就是最K小
//	if (i == k)
//		return a[i];
//	//若最后基准位置>k 在基准左边递归找
//	else if (i > k)
//		return min_k(a, left, i - 1, k);
//	//若最后基准位置<k 在基准右边递归找
//	else
//		return min_k(a, i + 1, right, k);
//}
//
//int main()
//{
//	int a[10] = { 0,7,5,8,4,6,9,1,3,2 };
//	printf("%d ", min_k(a, 1, 9, 4));
//	return 0;
//}

//荷兰国旗问题
void num(int a[], int n)
{
	//三个指针的指向 初始化
	int i = 0, j = 0, k = n - 1;
	//循环体
	while (j <= k)
	{
		//判断a[j]的值
		int v;
		if (a[j] > 0)
			v = 1;
		else if (a[j] = 0)
			v = 0;
		else
			v = -1;
		switch (v)
		{
			//负数 和i交换
		    case -1:
		    {
			    int t = a[i];
			    a[i] = a[j];
			    a[j] = t;
				i++;
				j++;
			    break;
		    }
			//0 遍历指针+1
		    case 0:
			{
				j++;
				break;
			}
			//正数 和K交换
		    case 1:
			{
				int t = a[k];
				a[k] = a[j];
				a[j] = t;
				k--;
				break;
			}
		}
	}
}

int main()
{
	int a[] = { 0,-1,0,-2,5,4,7,0,-9 };
	num(a, 9);
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}