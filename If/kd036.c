#include<stdio.h>

int main(void)
{
	int a, b;
	printf("整数１？");
	scanf("%d", &a);
	printf("整数２？");
	scanf("%d", &b);

	if (a > b)
	{
		printf("%dのほうが%dより%d大きい",a,b,a-b);
	}
	else
	{
		if (a == b)
		{
			printf("%dと%dは等しい\n", a, b);
		}
		else
		{
			if (a < b)
			{
				printf("%dのほうが%dより%d小さい", a, b, b - a);
			}
		}
	}
}