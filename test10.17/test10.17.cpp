#include <stdio.h>
#include <malloc.h>
//typedef struct treenode {
//	char data;
//	struct treenode* lchild, * rbro;
//}treenode,*tree;
//
//void buildtree(tree& t)
//{
//	char ch;
//	ch = getchar();
//	if (ch == '#')
//		t = NULL;
//	else
//	{
//		t = (treenode*)malloc(sizeof(treenode));
//		t->data = ch;
//		t->lchild = NULL;
//		t->rbro = NULL;
//		buildtree(t->lchild);
//		buildtree(t->rbro);
//	}
//}
////�Ժ����ֵ�����Ϊ�洢�ṹ���ݹ����������
//int height(tree t)
//{
//	if (t == NULL)
//		return 0;
//	else
//	{
//		//�ݹ�������������߶�
//		int l = height(t->lchild);
//		//�ݹ�������ֵ������߶�
//		int r = height(t->rbro);
//		return l + 1 > r ? l + 1 : r;
//	}
//}
//
//int main()
//{
//	tree t;
//	buildtree(t);
//	printf("%d", height(t));
//	//ABD#E##CF####
//	return 0;
//}

//��֪һ�����Ĳ�����м�ÿ�����Ķȣ���������ĺ���
typedef struct treenode {
	char data;
	struct treenode* lchild, * rbro;
}treenode,*tree;

void creat(tree& t, char e[], int degree[], int n)
{
	//��̬����������
	tree* point = new tree[10];
	for (int i = 0; i < n; i++)
	{
		//��ÿ����㶯̬�����ڴ�
		point[i] = (treenode*)malloc(sizeof(treenode));
		//����ʼ������ʼֵΪ������ĸ�Ͷ�Ӧ������ָ�룬��ʼ��Ϊ��
		point[i]->data = e[i];
		point[i]->lchild = NULL;
		point[i]->rbro = NULL;
	}
	//���ӽ�����
	int k = 0;
	//���ո��Ľ��˳����ʽ��
	for (int i = 0; i < n; i++)
	{
		//��ȡ����
		int d = degree[i];
		//����жȣ�˵���к��ӽ��
		if (d)
		{
			//������ŵ���
			k++;
			//��һ��������Ϊ�Լ������ӽ��
			point[i]->lchild = point[k];
			//ʣ�ຢ�ӣ�ÿ���������Ϊǰһ�������ֵܽ��
			for (int j = 2; j <= d; j++)
			{
				//������ŵ���
				k++;
				//ǰһ���������ֵ�ָ��ָ�����ں�����ŵĽ��
				point[k - 1]->rbro = point[k];
			}
		}
	}
	//�����ͷΪ��һ�����
	t = point[0];
	//��̬������ڴ�����ͷ�
	delete[] point;
}

//�����������
void disp(tree t)
{
	if (t)
	{
		printf("%c ", t->data);
		disp(t->lchild);
		disp(t->rbro);
	}
}

int main()
{
	tree t;
	char e[8] = { 'A','B','C','D','E','F','G' };
	//ÿ������������
	int degree[8] = { 3,2,1,0,0,0 };
	creat(t, e, degree, 7);
	disp(t);
	//��������ABEFCGD
	return 0;
}