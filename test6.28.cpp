#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//链队列
typedef struct LinkNode {
	ElemType data;
	struct LinkNode* next;
}LinkNode;

typedef struct {
	LinkNode* front, * rear;//头尾指针
}LinkQueue;

//初始化
void InitQueue(LinkQueue &Q) {
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}

//判空
bool QueueEmpty(LinkQueue Q) {
	if (Q.front==Q.rear)
		return true;
	else
		return false;
}

//插入
bool EnQueue(LinkQueue& Q, ElemType x) {
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = Q.front->next;//s->next=NULL;
	Q.rear->next = s;//rear始终指向最后一个结点
	Q.rear = s;
	return true;
}

//删除
bool DeQueue(LinkQueue& Q, ElemType x) {
	if (Q.front->next == NULL)
		return false;
	LinkNode* p = Q.front->next;
	Q.front->next = p->next;
	if (Q.front->next == NULL) 
		Q.rear=Q.front;
	free(p);
	return true;
}