#include<stdio.h>

//给一个满二叉树的前序序列，求后序序列
void prepost(char pre[], int l1, int h1, char post[], int l2,int h2)
{
	int half;//左右子树临界
	if (l1 <= h1)//递归条件
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