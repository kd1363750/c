#include<stdio.h>

int main(void)
{
	int a, b;

	while (1)
	{
		printf("整数１（ー９９９で終了）？");
		scanf("%d", &a);
		printf("整数２（ー９９９で終了）？");
		scanf("%d", &b);
		if (a == 0 || b == 0)continue;
		if (a == -999 || b == -999)break;

		printf("%d/%d=%dあまり%d\n", a, b, a / b, a % b);
	}
}