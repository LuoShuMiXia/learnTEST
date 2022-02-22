#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	char str[] = "abc";
	scanf("%s", &str);
	int sz = sizeof(str) / sizeof(str[0]);
	int i = 0;
	int count = 0;
	for (i = 0; i < sz; i++)
	{
		if (str[i] != '\0')
		{
			count += 1;
		}
	}
	printf("%d", count);
	return 0;
}


//int fac(int a)
//{
//	if (a == 1)
//		return 1;
//	else
//		return a * fac(a - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int product = 1;
//	for (i = 1; i <= n; i++)
//	{
//		product = i * product;
//	}
//	printf("%d", product);
//	return 0;
//}


//print(int n)
//{
//	if (n <= 9)
//		printf("%d  ", n);
//	else
//	{
//		print(n / 10);
//		printf("%d  ", n % 10);
//	}
//		
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//void print(int x)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= x; i++)
//	{
//		printf("\n");
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d * %2d = %4d  ", j, i, i * j);
//
//		}
//	}
//}
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	print(line);
//	return 0;
//}


//void swap(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	swap(&a,&b);
//	printf("%d  %d", a, b);
//	return 0;
//}


//int leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d",&year);
//	if (leap_year(year) == 1)
//		printf("%d 是闰年", year);
//	else
//		printf("%d 不是闰年", year);
//	return 0;
//}


//int prime(int num)
//{
//	int n = 0;
//	for (n = 2; n <= sqrt(num); n++)
//	{
//		if (num % n == 0)
//			return 0;
//	}
//	if (n > sqrt(num))
//		return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (prime(i) == 1)
//			printf("%d  ", i);
//	}
//	return 0;
//}