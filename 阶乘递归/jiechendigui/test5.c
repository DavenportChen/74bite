#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n*fact(n - 1);
}
int main()

{
	int n = 0;
	printf("请输入一个数:");
	scanf("%d", &n);
	printf("%d", fact(n));
	system("pause");
	return 0;
}
