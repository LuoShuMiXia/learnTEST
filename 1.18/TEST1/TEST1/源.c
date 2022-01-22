#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数据（用空格分隔）：");
	scanf("%d%d", &a, &b);
	if (a > b)
		printf("较大值是：%d", a);
	else
		printf("较大值是：%d", b);
	return 0;
}