#include<stdio.h>
#include <malloc.h>
#define Max 20
//判断是否为完全二叉树
//ABD##E##CF##G##  完全
//ABD###CE##F##    非完全

typedef struct treenode {
	char data;
	struct treenode* lchild, * rchild;
}treenode,*tree;

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
		t->rchild == NULL;
		build(t->lchild);
		build(t->rchild);
	}
}

struct squeue {
	struct treenode* data[Max];
	int f, r, tag;
};

bool isempty(squeue s)
{
	if (s.f == s.r && s.tag == 0)
		return true;
	else
		return false;
}

bool isfull(squeue s)
{
	if (s.f == s.r && s.tag == 1)
		return true;
	else
		return false;
}

bool enters(squeue& s, treenode* p)
{
	if (isfull(s))
		return false;
	s.data[s.r] = p;
	s.r = (s.r + 1) % Max;
	s.tag = 1;
	return true;
}

bool outs(squeue& s, treenode*& p)
{
	if (isempty(s))
		return false;
	p = s.data[s.f];
	s.f = (s.f + 1) % Max;
	s.tag = 0;
	return true;
}

bool isok(tree t)
{
	squeue s;
	s.f = s.r = s.tag = 0;
	bool flag = true, ans = true;
	if (t == NULL)
		ans = true;
	if (t->lchild && t->rchild)
		ans = true;
	enters(s,t);
	treenode* p;
	while (!isempty(s))
	{
		outs(s, p);
		if (!p->lchild)
		{
			flag = false;
			if (p->rchild)
				ans = false;
		}
		else//有左孩子
		{
			if (flag)//之前不存在缺孩子的节点
			{
				enters(s, p->lchild);
				if (p->rchild)
					enters(s, p->rchild);
				else
					flag = false;
			}
			else//之前存在缺孩子的节点
				ans = false;
		}
	}
	if (ans)
		return true;
	else
		return false;
}

int main()
{
	tree t;
	build(t);
	if (isok(t))
		printf("yes");
	else
		printf("no");
	return 0;
}