#include<stdio.h>

//�������в��ҵ�KС��Ԫ��
//int min_k(int a[], int left, int right, int k)
//{
//	//�������򻮷��㷨
//	//iһ��ʼָ��leftλ��
//	int i = left;
//	//�ӵڶ���λ�ÿ�ʼ����������
//	int p = a[left];
//	for (int j = left + 1; j <= right; j++)
//	{
//		//���С�ڻ�׼ֵ
//		if (a[j] < p)
//		{
//			int t = a[i + 1];
//			a[i + 1] = a[j];
//			a[j] = t;
//		}
//	}
//	//����׼Ԫ�ز��뵽���յ�λ��
//	int t = a[i];
//	a[i] = a[left];
//	a[left] = t;
//	//������׼λ��ΪK ��׼������KС
//	if (i == k)
//		return a[i];
//	//������׼λ��>k �ڻ�׼��ߵݹ���
//	else if (i > k)
//		return min_k(a, left, i - 1, k);
//	//������׼λ��<k �ڻ�׼�ұߵݹ���
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

//������������
void num(int a[], int n)
{
	//����ָ���ָ�� ��ʼ��
	int i = 0, j = 0, k = n - 1;
	//ѭ����
	while (j <= k)
	{
		//�ж�a[j]��ֵ
		int v;
		if (a[j] > 0)
			v = 1;
		else if (a[j] = 0)
			v = 0;
		else
			v = -1;
		switch (v)
		{
			//���� ��i����
		    case -1:
		    {
			    int t = a[i];
			    a[i] = a[j];
			    a[j] = t;
				i++;
				j++;
			    break;
		    }
			//0 ����ָ��+1
		    case 0:
			{
				j++;
				break;
			}
			//���� ��K����
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