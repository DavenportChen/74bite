#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubbleSort(int arr[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void ShowArr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[] = { 8, 4, 12, 5, 34, 13 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	ShowArr(arr1, len);
	bubbleSort(arr1,len);
	ShowArr(arr1, len);
}