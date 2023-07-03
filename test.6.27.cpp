#define _CRT_SECURE_NO_WARNINGS 1
#define ElemType int

//循环队列
#define MaxSize 10
typedef struct {
	ElemType data[MaxSize];
	int front, rear;
	int size=0;
	int tag;
} SqQueue;

//初始化
void InitQueue(SqQueue &Q) {
	Q.front = Q.rear = 0;//初始化队首队尾指针
}

//判空
bool QueueEmpty(SqQueue Q) {
	if (Q.front == Q.rear)
		return true;
	else
		return false;
	//方法二：添加size变量
	Q.size = (Q.rear - Q.front + MaxSize) % MaxSize;
	if (Q.size == 0)
		return true;
	else
		return false;
}

//入队
bool EnQueue(SqQueue& Q,ElemType x) {
	if ((Q.rear + 1)%MaxSize==Q.front)
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	return true;
	//方法二：添加size变量
	Q.size = (Q.rear - Q.front + MaxSize) % MaxSize;
	if (Q.size == MaxSize)
		return false;
}

//出队
bool DeQueue(SqQueue& Q, ElemType x) {
	if (Q.front == Q.rear)
		return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
	//方法二：添加size变量
	Q.size = (Q.rear - Q.front + MaxSize) % MaxSize;
	if (Q.size == 0)
		return false;
}

