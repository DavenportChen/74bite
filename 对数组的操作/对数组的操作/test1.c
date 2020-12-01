#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//逆置:
void reverse(int a[], int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		int tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
void Print2(int a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
//初始化为0:
void Init(int a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		a[i] = 0;
	}
}


void Print1(int a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

//交换:
void Swap(int a[],int b[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int i = 0; i < len; i++)
		{
			int tmp = a[i];
			a[i] = b[i];
			b[i] = tmp;
		}
	}
}
void Print(int a[], int b[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
		for (int i = 0; i < len; i++)
		{
			printf("%d ", b[i]);
		}
	printf("\n");
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 0 };
	int len = sizeof(a) / sizeof(a[0]);
	printf("逆置前:\n");
	Print2(a, len);
	reverse(a, len);
	printf("逆置后:\n");
	Print2(a, len);
	printf("交换前:\n");
	Print(a, b, len);
	Swap(a, b, len);
	printf("交换后:\n");
	Print(a, b, len);
	printf("对数组a初始化为0:\n");
	printf("初始化前:\n");
	Print1(a, len);
	Init(a, len);
	printf("初始化后\n");
	Print1(a,len);
	system("pause");
	return 0;
}