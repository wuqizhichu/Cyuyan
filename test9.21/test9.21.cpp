#include<stdio.h>
#include <malloc.h>
#define Max 10
//非递归二叉树后序遍历
//typedef struct Treenode {
//	char data;
//	struct Treenode* lchild, * rchild;
//	int tag;
//}Treenode,*Tree;
////ABD##E##C##
//void creattree(Tree& t)//构造二叉树
//{
//	char ch;
//	ch = getchar();
//	if (ch == '#')
//		t = NULL;
//	else
//	{
//		t = (Treenode*)malloc(sizeof(Treenode));
//		t->data = ch;
//		t->tag = 0;
//		t->lchild = NULL;
//		t->rchild = NULL;
//		creattree(t->lchild);
//		creattree(t->rchild);
//	}
//}
//
//void back(Tree t)
//{
//	struct Treenode* stack[100];//创建栈
//	int top = -1;
//	Treenode* p = t;
//	Treenode* x;
//	while (p || top!=-1)
//	{
//		if (p)//P不为空，将P指向的元素压入栈，P指向P的左孩子
//		{
//			top++;
//			stack[top] = p;
//			p = p->lchild;
//		}
//		else//P空，栈非空
//		{
//			p = stack[top];//先让P指向栈顶元素，随后判断右孩子
//			if (p->rchild && p->rchild->tag == 0)//P有右孩子且未访问
//				p = p->rchild;
//			else//p没有右孩子或者已经被访问过了
//			{
//				p = stack[top];
//				top--;
//				printf("%c ", p->data);
//				p->tag = 1;//已经被访问过
//				p = NULL;
//			}
//		}
//	}
//}
//
//int main()
//{
//	Tree t;
//	creattree(t);
//	back(t);
//	return 0;
//}

//自下而上，自右向左的层次遍历
//ABD##E##CF##G##
typedef struct treenode {
	char data;
	struct treenode* lchild, * rchild;
}treenode,*tree;

void creattree(tree& t)
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
		creattree(t->lchild);
		creattree(t->rchild);
	}
}

typedef struct stack {
	struct treenode* data[Max];
	int top;
}stack;

bool isfull(stack s)
{
	if (s.top == Max - 1)
		return true;
	return false;
}

bool isempty(stack s)
{
	if (s.top == -1)
		return true;
	return false;
}

bool enterstack(stack& s,treenode *p)
{
	if (isfull(s))
	{
		printf("栈满");
		return false;
	}
	s.data[++s.top] = p;
	return true;
}

bool outstack(stack& s, treenode*& p)
{
	if (isempty(s))
	{
		printf("栈空");
		return false;
	}
	p = s.data[s.top--];
	return true;
}

struct squeue {
	struct treenode* data[Max];
	int f, r, tag;
};

bool entersqueue(squeue& s, treenode* x)
{
	if (s.f == s.r && s.tag == 1)
	{
		printf("队满");
		return false;
	}
	s.data[s.r] = x;
	s.r = (s.r + 1) % Max;
	s.tag = 1;
	return true;
}

int outsqueue(squeue& s, treenode*& x)
{
	if (s.f == s.r && s.tag == 0)
	{
		printf("队空");
		return 0;
	}
	x = s.data[s.f];
	s.f = (s.f + 1) % Max;
	s.tag = 0;
	return 1;
}

void solve(tree t)
{
	stack s;
	squeue q;
	treenode* p;
	if (t)
	{
		s.top = -1;
		q.f = q.r = q.tag = 0;
		entersqueue(q, t);//将节点压入队列中
		while (!(q.f == q.r && q.tag == 0))
		{
			outsqueue(q, p);//当队列非空时，将队列元素出队，压入栈中
			enterstack(s, p);
			if (p->lchild)
				entersqueue(q, p->lchild);//若节点有左右孩子，则分别压入栈中，重复流程
			if (p->rchild)
				entersqueue(q, p->rchild);
		}
		while (!isempty(s))//当栈不为空时，输出栈中元素
		{
			outstack(s, p);
			printf("%c ", p->data);
		}
	}
}

int main()
{
	tree t;
	creattree(t);
	solve(t);
	return 0;
}