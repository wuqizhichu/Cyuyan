#include<stdio.h>

//从图的领接表表示转换成领接矩阵表示
//领接表存储结构
//typedef struct Arcnode {
//	//当前弧指向顶点的位置
//	int adjvex;
//	//指向下一条弧的指针
//	struct Arcnode* next;
//}Arcnode;
//
////顶点表结点
//typedef struct Vnode {
//	//顶点信息
//	char data;
//	//指向第一条依附该顶点的指针
//	Arcnode* first;
//}Vnode,Adjlist[10];
//
//typedef struct{
//	//领接表
//	Adjlist v;
//	//顶点数和弧数
//	int vnum, arcnum;
//}ALGraph;
////转换函数
//void convert(ALGraph& G, int arsc[M][N])
//{
//	//用来取边
//	Arcnode* p;
//	//遍历每条顶点表结点为头的边链表
//	for (int i = 0; i < n;i++)
//	{
//		//取顶点i的第一条出边
//		p = (G.v[i]).first;
//		//
//		while (p != NULL)
//		{
//			//置 1
//			arsc[i][p->adjvex] = 1;
//			//指向下一个结点
//			p = p->next;
//		}
//	}
//}
//
//int main()
//{
//	return 0;
//}

//判断一个无向图是否是一棵树
//DFS
void DFS(Graph& G, int v, int& vnum, int& enum, int visited[])
{
	visited[i] = true;//访问过
	vnum++;//顶点数+1
	int w = FirstNeighbor(G, v);
	while (w != -1)
	{
		//第一个领接结点存在 存在边
		enum++;//边+1
		if (!visited[w])//该领接点有没有被访问过
			DFS(G, w, vnum, enum, visited);//继续遍历
		w = FirstNeighbor(G, v, w);//找下一个领接点
	}
}

//判断是否是树
bool istree()
{
	//顶点数，边数
	int vnum = 0, enum = 0;
	//访问标记
	bool visited[Max];
	for (int i = 0; i < n; i++)
		visited[i] = false;
	DFS(G, 1, vnum, enum, visited);
	if (vnum == G.vexnum && enum == 2 * (G.vexnum - 1))
		return true;
	else
		return false;
}

int main()
{
	return 0;
}