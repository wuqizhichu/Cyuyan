#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#define InitSize 10  //定义线性表的最大长度
//顺序表的类型定义
typedef struct
{
	char* data;
	int MaxSize;
	int length;
}SeqList;                                                //10
//顺序表的初始化
void InitList(SeqList &L)
{
	L.data = (char*)malloc(sizeof(char) * InitSize);
	L.length = 0;
	L.MaxSize = InitSize;
	for (int i = 0; i <L. MaxSize; i++) {
		*(L.data + i) = 'a' + i;
	}
	for (int i = 0; i < L.MaxSize; i++) {
		if (*(L.data + i) > 0)
		{
			printf("data[%d]=%c\n", i, *(L.data + i));
		}
	}
}
//增加动态数组的长度
void  IncreaseSize(SeqList& L, int len)
{
	char* p = L.data;
	L.data = (char*)malloc(sizeof(char) * (InitSize + len));         //20
	for (int i = 0; i < L.length; i++) {
		L.data[i] = p[i];
	}
	L.MaxSize = L.MaxSize + len;
	free(p);
}
bool ListInsert(SeqList& L, int i, char c)
{
	if (i<1 || i>L.length + 1)
		return false;                                                //30
	if (L.length >= L.MaxSize)
		return false;
	for (int j = L.length; j >= i; j--)
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = c;
	L.length++;
	return true;
}
void PrintList(SeqList L)
{                                                                //40
	
	for (int i = 0; i < L.length; i++)
	{
		printf("%c,%d ", L.data[i], i+1);
	}
}
int main()
{
	SeqList L;
	InitList(L);
	
	IncreaseSize(L, 5);
	char z = 'z';
	ListInsert(L,11 , z);
	PrintList(L);
	return 0;
}