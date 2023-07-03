#define _CRT_SECURE_NO_WARNINGS 1

#define ElemType int
#define Initsize 50
#include <stdio.h>
#include <stdlib.h>
typedef struct {
	ElemType *data;
	int Maxsize,length;
}SeqList;
//删除顺序表中最小值的元素，用最后一个元素填补被删除的位置
bool De_Min(SeqList& L, ElemType& x)
{
	if (L.length == 0)
		return false;
	x = L.data[0];
	int d = 0;
	for (int i = 1; i < L.length; i++)
		if (L.data[i] < x)
		{
			x = L.data[i];
			d=i;
		}
	L.data[d] = L.data[L.length];
	L.length--;
	return true;
}