#include<stdio.h>

int main(void)
{
	int a, sum = 0, cnt = 0;

	printf("整数（ー９９９で終了）？");
	scanf("%d", &a);

	while (1)
	{
		if (a == -999)
		{
			break;
		}
		sum += a;
		cnt++;
		printf("整数（ー９９９で終了）？");
		scanf("%d", &a);
	}
	printf("合計=%d", sum);
	printf("平均=%.3f", (float)sum / cnt);
}