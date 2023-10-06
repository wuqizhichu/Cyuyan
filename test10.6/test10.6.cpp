#include <stdio.h>
#include<malloc.h>
//�������ṹ��
typedef struct treenode {
	char data;
	struct treenode* lchild, * rchild;
}treenode,*tree;

//����ջ�ṹ��
typedef struct {
	treenode* t;
	int tag;
	//tag=0-���ӷ��ʹ�
	//tag=1-�Һ��ӷ��ʹ�
}stack;

void build(tree& t)
{
	char ch;
	ch = getchar();
	if (ch == '#')
		t = NULL;
	else
	{
		t = (treenode*)malloc(sizeof(treenode));
		t->data = ch;
		t->lchild = NULL;
		t->rchild = NULL;
		build(t->lchild);
		build(t->rchild);
	}
}

//�ǵݹ�������
void grand(tree t, char x)
{
	//ջ��ջ��ָ���ʼ��
	stack s[10];
	int top = 0;
	while(t!=NULL||top>0)
	{
		//�Ӹ��ڵ㿪ʼ����ѹ��ջ���ҽڵ�ֵΪX
		while (t != NULL && t->data != x)
		{
			s[++top].t = t;
			s[top].tag = 0;
			t = t->lchild;
		}
		//����ҵ�X����ջ��Ԫ�ؽڵ�ֵ���
		if (t != NULL && t->data == x)
		{
			printf("�������Ƚ�㣺\n");
			for (int i = 1; i <= top; i++)
			{
				printf("%c ", s[i].t->data);
			}
			break;
		}
		//��ǰջ�����tagΪ1ʱ����ջ
		while (top != 0 && s[top].tag == 1)
		{
			top--;
		}
		//��ǰջ����Ϊ0����tag��ֵΪ1�����ָ��ý����Һ���
		if (top != 0)
		{
			s[top].tag = 1;
			t = s[top].t->rchild;
		}
	}
}
//ABD##E##CF##G##
int main()
{
	tree t;
	build(t);
	grand(t, 'F');
	return 0;
}