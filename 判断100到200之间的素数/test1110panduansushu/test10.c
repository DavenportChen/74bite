#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int Prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i ++)
	{
		if (n%i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i < 200; i++)
	{
		if (Prime(i) == 1)
			printf("%d  ", i);
	}
	return 0;
}

