#include<stdio.h>

//��һ������������ǰ�����У����������
void prepost(char pre[], int l1, int h1, char post[], int l2,int h2)
{
	int half;//���������ٽ�
	if (l1 <= h1)//�ݹ�����
	{
		post[h2] = pre[l1];
		half = (h1 - l1) / 2;
		prepost(pre, l1 + 1, l1 + half, post, l2, l2 + half - 1);
		prepost(pre, l1 + half+1, h1, post, l2 + half, h2 - 1);
	}
}

int main()
{
	char pre[8] = "ABDECFG", post[8];
	prepost(pre, 0, 6, post, 0, 6);
	for (int i = 0; i < 7; i++)
	{
		printf("%c ", post[i]);
	}
	return 0;
}