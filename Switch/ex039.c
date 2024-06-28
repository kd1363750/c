#include<stdio.h>
main()
{
	char i;
	int a, b, c;
	printf("処理を入力:");
	scanf("%c", &i);
	printf("整数を入力:");
	scanf("%d%d%d", &a, &b, &c);
	switch (i)
	{
	case 'd':
	case 'D':
		if (a > b)
		{
			if (a > c)
			{
				printf("最大値は%dです\n", a);
			}
			else
			{
				printf("最大値は%dです\n", c);
			}
		}
		else
		{
			if (b > c) {
				printf("最大値は%dです\n", b);
			}
			else
			{
				printf("最大値は%dです\n", c);
			}
		}
		break;
	case 's':
	case 'S':
		if (a < b)
		{
			if (a < c)
			{
				printf("最小値は%dです\n", a);
			}
			else
			{
				printf("最小値は%dです\n", c);
			}
		}
		else
		{
			if (b < c)
			{
				printf("最小値は%dです\n", b);
			}
			else
			{
				printf("最小値は%dです\n", c);
			}
		}
		break;
	case'g':
	case'G':
			printf("合計は%dです\n", a + b + c);
			break;
	case'h':
	case'H':
		printf("平均は%.2fです\n", (float)(a + b + c)/3.0);
		break;
	default:
		printf("エラーだよん(d:最大値 s:最小値 g:合計 h:平均)");
	}
}