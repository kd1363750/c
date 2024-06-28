#include<stdio.h>

int main(void)
{
	int a,sum=0,cnt=0;

	printf("整数（-999で終了）？");
	scanf("%d", &a);

	while (a != -999)
	{
		sum += a;
		printf("整数（-999で終了）？");
		scanf("%d", &a);
		cnt++;
	}
	printf("合計=%d\n", sum);
	printf("平均=%.2f", (float)sum / cnt);
}