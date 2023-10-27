#include <stdio.h>

//˫��ð��
//void bsort(int a[], int n)
//{
//	//��Χ����������
//	int left = 0, right = n - 1;
//	//һ���Ƿ񽻻��� ��ʼ��
//	bool flag = true;
//	//ѭ������ ��<�� ����һ���н���
//	while (left < right && flag)
//	{
//		//����ǰ Ĭ��һ���޽���
//		flag = false;
//		//��ǰ��󽻻�
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
//		//�Ӻ���ǰ����
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
	//���ҷ�Χ����������
	int i = 0, j = n - 1;
	//ѭ����������
	while (i < j)
	{
		//��ǰ�����ż��λ��
		while (i < j && a[i] % 2 == 1)
			i++;
		//�Ӻ���ǰ������λ��
		while (i < j && a[j] % 2 == 0)
			j--;
		//��ż��������ǰ�� ����
		if (i < j)
		{
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
			//���·�Χ���Ҷ�
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