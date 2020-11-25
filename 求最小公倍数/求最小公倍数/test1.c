#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main()
{
	int a,b, i, t;
	printf("请输入两个数:");
	scanf("%d %d",&a,&b);
	if (b > a)
	{
		t = b;
		b = a;
		a = t;
	}
	for (i = a; i> 0; i++)
	{
		if (i%a == 0 && i%b == 0)
		{
			printf("最小公倍数为:%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}
