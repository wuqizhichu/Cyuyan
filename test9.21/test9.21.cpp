#include<stdio.h>
#include <malloc.h>
#define Max 10
//�ǵݹ�������������
//typedef struct Treenode {
//	char data;
//	struct Treenode* lchild, * rchild;
//	int tag;
//}Treenode,*Tree;
////ABD##E##C##
//void creattree(Tree& t)//���������
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
//	struct Treenode* stack[100];//����ջ
//	int top = -1;
//	Treenode* p = t;
//	Treenode* x;
//	while (p || top!=-1)
//	{
//		if (p)//P��Ϊ�գ���Pָ���Ԫ��ѹ��ջ��Pָ��P������
//		{
//			top++;
//			stack[top] = p;
//			p = p->lchild;
//		}
//		else//P�գ�ջ�ǿ�
//		{
//			p = stack[top];//����Pָ��ջ��Ԫ�أ�����ж��Һ���
//			if (p->rchild && p->rchild->tag == 0)//P���Һ�����δ����
//				p = p->rchild;
//			else//pû���Һ��ӻ����Ѿ������ʹ���
//			{
//				p = stack[top];
//				top--;
//				printf("%c ", p->data);
//				p->tag = 1;//�Ѿ������ʹ�
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

//���¶��ϣ���������Ĳ�α���
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
		printf("ջ��");
		return false;
	}
	s.data[++s.top] = p;
	return true;
}

bool outstack(stack& s, treenode*& p)
{
	if (isempty(s))
	{
		printf("ջ��");
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
		printf("����");
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
		printf("�ӿ�");
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
		entersqueue(q, t);//���ڵ�ѹ�������
		while (!(q.f == q.r && q.tag == 0))
		{
			outsqueue(q, p);//�����зǿ�ʱ��������Ԫ�س��ӣ�ѹ��ջ��
			enterstack(s, p);
			if (p->lchild)
				entersqueue(q, p->lchild);//���ڵ������Һ��ӣ���ֱ�ѹ��ջ�У��ظ�����
			if (p->rchild)
				entersqueue(q, p->rchild);
		}
		while (!isempty(s))//��ջ��Ϊ��ʱ�����ջ��Ԫ��
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