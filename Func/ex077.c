#include<stdio.h>
void maxmin(int a, int b, int c,int *p_max, int *p_min);

main()
{
	int a, b, c, max, min;

	printf("整数を３つ入力:");
	scanf("%d%d%d", &a, &b, &c);
	max = a;
	min = a;

	maxmin(a, b, c, &max, &min);
	printf("最大値=%d\t最小値=%d\n",max,min);
}

void maxmin(int a, int b, int c, int *p_max, int *p_min)
{
	if (*p_max < b)
	{
		*p_max = b;
	}
	if (*p_max < c)
	{
		*p_max = c;
	}
	if (*p_min > b)
	{
		*p_min = b;
	}
	if (*p_min > c)
	{
		*p_min = c;
	}
}