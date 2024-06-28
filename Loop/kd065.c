#include<stdio.h>

int main(void)
{
	int a, sum = 0, cnt = 0;

	do
	{
		printf("整数（ー９９９で終了）？");
		scanf("%d", &a);
		if (a != -999)
		{
			sum += a;
			cnt++;
		}
	} while (a != -999);

	printf("合計=%d", sum);
	printf("平均=%f", (float)sum / cnt);
}