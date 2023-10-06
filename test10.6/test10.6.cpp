#include <stdio.h>
#include<malloc.h>
//二叉树结构体
typedef struct treenode {
	char data;
	struct treenode* lchild, * rchild;
}treenode,*tree;

//辅助栈结构体
typedef struct {
	treenode* t;
	int tag;
	//tag=0-左孩子访问过
	//tag=1-右孩子访问过
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

//非递归后序遍历
void grand(tree t, char x)
{
	//栈，栈顶指针初始化
	stack s[10];
	int top = 0;
	while(t!=NULL||top>0)
	{
		//从根节点开始向左压入栈中且节点值为X
		while (t != NULL && t->data != x)
		{
			s[++top].t = t;
			s[top].tag = 0;
			t = t->lchild;
		}
		//如果找到X，将栈中元素节点值输出
		if (t != NULL && t->data == x)
		{
			printf("所有祖先结点：\n");
			for (int i = 1; i <= top; i++)
			{
				printf("%c ", s[i].t->data);
			}
			break;
		}
		//当前栈顶结点tag为1时，退栈
		while (top != 0 && s[top].tag == 1)
		{
			top--;
		}
		//当前栈顶不为0，将tag赋值为1，结点指向该结点的右孩子
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