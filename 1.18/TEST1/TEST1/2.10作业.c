#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int check = 0;
	scanf("%d", &check);
	int left = 0;
	int right = 9;
	do
	{
		int a = (left + right) / 2;
		if (check < arr[a])
			right = a-1;
		else if (check > arr[a])
			left = a+1;
		else
		{
			printf("�ҵ��ˣ�����\n");
			printf("�±�Ϊ��%d\n",a);
			break;
		}	
	} while (left <= right);
		if (left > right)
			printf("û�ҵ�\n");
	return 0;
}


//void menu()
//{
//	printf("*********��������Ϸ**********\n");
//	printf("*********1.��ʼ��Ϸ**********\n");
//	printf("*********2.������Ϸ**********\n");
//	printf("��ѡ��>--");
//}
//void game()
//{	
//		int a = rand()%100;
//	while (1)
//	{
//		int answer=0;
//		scanf("%d", &answer);
//		if (answer == a)
//		{
//			printf("����ˣ�����\n");
//			break;
//		}
//		else if (answer < a)
//			printf("С��\n");
//		else
//			printf("����\n");
//	}
//
//}
//
//int main()
//{
//	int start = 0;
//	srand((unsigned int)time(NULL));
//	while (start!=2)
//	{
//		menu();//��Ϸ��ʼ����
//		scanf("%d", &start);
//		switch (start)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	}
//		return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = i; j <= 9; j++)
//		{
//			printf("%d * %d = %d   ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("1�� 100 �����������г�������9������Ϊ��%d\n", count);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b =0 ;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	if (a == b||a%b==0)
//		printf("���Լ���ǣ�%d", b);
//	else
//	{
//		while (a != b)
//		{
//			c = a % b;
//			if (0 == c)
//			{
//				printf("���Լ���ǣ�%d", b);
//				break;
//			}
//			a = b;
//			b = c;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	double flag = 1;
//	double count = 0.0;
//	double a = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		a = flag/i;
//		count = count + a;
//		flag = -flag;
//	}
//	printf("%f\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[1001] = { 0 };
//	for (i = 0; i < 1001; i++)
//	{
//		arr[i] = i + 1000;
//	}
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr[i] % 4 == 0 && arr[i] % 100 != 0)
//			printf("%d ", arr[i]);
//		else if(arr[i]%400==0)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[101] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 101; i++)
//	{
//		arr[i] = i + 100;
//	}
//	
//	for (j = 0; j < 101; j++)
//	{
//		int k = (int)sqrt((double)arr[j]);
//		for (i = 2; i <= k; i++)
//		{
//			if (arr[j] % i == 0)
//				break;
//		}
//		if (i > k)
//			printf("%d  ", arr[j]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("���ֵ�ǣ�%d", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	int t = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	if (arr[0] > arr[1])
//	{
//		t = arr[0];
//		arr[0] = arr[1];
//		arr[1] = t;
//	};
//	
//	if (arr[0] > arr[2])
//	{
//		t = arr[0];
//		arr[0] = arr[2];
//		arr[2] = t;
//	};
//	
//	if (arr[1] > arr[2])
//	{
//		t = arr[1];
//		arr[1] = arr[2];
//		arr[2] = t;
//	};
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	};
//	return 0;
//}