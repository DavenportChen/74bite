#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main()
{
	int a,b, i, t;
	printf("������������:");
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
			printf("��С������Ϊ:%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}
