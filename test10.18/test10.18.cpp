#include<stdio.h>

//��ͼ����ӱ��ʾת������Ӿ����ʾ
//��ӱ�洢�ṹ
//typedef struct Arcnode {
//	//��ǰ��ָ�򶥵��λ��
//	int adjvex;
//	//ָ����һ������ָ��
//	struct Arcnode* next;
//}Arcnode;
//
////�������
//typedef struct Vnode {
//	//������Ϣ
//	char data;
//	//ָ���һ�������ö����ָ��
//	Arcnode* first;
//}Vnode,Adjlist[10];
//
//typedef struct{
//	//��ӱ�
//	Adjlist v;
//	//�������ͻ���
//	int vnum, arcnum;
//}ALGraph;
////ת������
//void convert(ALGraph& G, int arsc[M][N])
//{
//	//����ȡ��
//	Arcnode* p;
//	//����ÿ���������Ϊͷ�ı�����
//	for (int i = 0; i < n;i++)
//	{
//		//ȡ����i�ĵ�һ������
//		p = (G.v[i]).first;
//		//
//		while (p != NULL)
//		{
//			//�� 1
//			arsc[i][p->adjvex] = 1;
//			//ָ����һ�����
//			p = p->next;
//		}
//	}
//}
//
//int main()
//{
//	return 0;
//}

//�ж�һ������ͼ�Ƿ���һ����
//DFS
void DFS(Graph& G, int v, int& vnum, int& enum, int visited[])
{
	visited[i] = true;//���ʹ�
	vnum++;//������+1
	int w = FirstNeighbor(G, v);
	while (w != -1)
	{
		//��һ����ӽ����� ���ڱ�
		enum++;//��+1
		if (!visited[w])//����ӵ���û�б����ʹ�
			DFS(G, w, vnum, enum, visited);//��������
		w = FirstNeighbor(G, v, w);//����һ����ӵ�
	}
}

//�ж��Ƿ�����
bool istree()
{
	//������������
	int vnum = 0, enum = 0;
	//���ʱ��
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