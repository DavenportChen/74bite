#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//����:
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
//��ʼ��Ϊ0:
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

//����:
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
	printf("����ǰ:\n");
	Print2(a, len);
	reverse(a, len);
	printf("���ú�:\n");
	Print2(a, len);
	printf("����ǰ:\n");
	Print(a, b, len);
	Swap(a, b, len);
	printf("������:\n");
	Print(a, b, len);
	printf("������a��ʼ��Ϊ0:\n");
	printf("��ʼ��ǰ:\n");
	Print1(a, len);
	Init(a, len);
	printf("��ʼ����\n");
	Print1(a,len);
	system("pause");
	return 0;
}