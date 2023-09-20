#include <stdio.h>
//求二叉树两个节点最近的公共节点
struct tree {
	int data[12] = { -1,1,2,3,-1,4,-1,5,-1,-1,6,-1 };
};

int comm(tree t, int i, int j)
{
	if (t.data[i] != -1 && t.data[j] != -1)//i和j的合法判断
	{
		while(i != j)
		{
			if (i > j)
				i = i / 2;
			else
				j = j / 2;
		}
		return t.data[i];
	}
	return -1;
}

int main()
{
	tree t;
	int x = comm(t, 7, 10);
	printf("%d ", x);
	return 0;
}