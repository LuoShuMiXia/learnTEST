#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	printf("�������������ݣ��ÿո�ָ�����");
	scanf("%d%d", &a, &b);
	if (a > b)
		printf("�ϴ�ֵ�ǣ�%d", a);
	else
		printf("�ϴ�ֵ�ǣ�%d", b);
	return 0;
}