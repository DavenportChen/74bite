#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y)
{
	if (x >=y)
		return x;
	else
		return y;
}

int main()

{

	

	int a, b, c;

	scanf("%d%d", &a, &b);

	c = Max(a, b);

	printf("Max=%d\n",c);

	return 0;



}