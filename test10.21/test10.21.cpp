#include <iostream>
using namespace std;
typedef struct {
	int a[10] = { 0,1,2,3,4,5,6,7,8 };
	int length = 8;
}ST;

int bin(ST s, int ans, int low, int high)
{
	//递归条件
	if (low > high)
		return 0;
	//求出中间下标
	int mid = (low + high) / 2;
	if (ans > s.a[mid])
		return bin(s, ans, mid + 1, high);
	else if (ans < s.a[mid])
		return bin(s, ans, low, mid - 1);
	else
		return mid;
}

int main()
{
	ST s;
	printf("%d", bin(s, 10, 1, 8));
	return 0;
}