#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
void ChengFa(int n)

{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%3d  ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	ChengFa(n);
	system("pause");
	return 0;
}