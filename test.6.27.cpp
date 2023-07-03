#define _CRT_SECURE_NO_WARNINGS 1
#define ElemType int

//ѭ������
#define MaxSize 10
typedef struct {
	ElemType data[MaxSize];
	int front, rear;
	int size=0;
	int tag;
} SqQueue;

//��ʼ��
void InitQueue(SqQueue &Q) {
	Q.front = Q.rear = 0;//��ʼ�����׶�βָ��
}

//�п�
bool QueueEmpty(SqQueue Q) {
	if (Q.front == Q.rear)
		return true;
	else
		return false;
	//�����������size����
	Q.size = (Q.rear - Q.front + MaxSize) % MaxSize;
	if (Q.size == 0)
		return true;
	else
		return false;
}

//���
bool EnQueue(SqQueue& Q,ElemType x) {
	if ((Q.rear + 1)%MaxSize==Q.front)
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	return true;
	//�����������size����
	Q.size = (Q.rear - Q.front + MaxSize) % MaxSize;
	if (Q.size == MaxSize)
		return false;
}

//����
bool DeQueue(SqQueue& Q, ElemType x) {
	if (Q.front == Q.rear)
		return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
	//�����������size����
	Q.size = (Q.rear - Q.front + MaxSize) % MaxSize;
	if (Q.size == 0)
		return false;
}

