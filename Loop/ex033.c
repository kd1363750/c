#include<stdio.h>
main()
{
	int i, su, sum;
	sum= 0;
	printf("数を入れて:");
	scanf("%d", &su);
	for (i=0; su != -999; i++)
	{
		sum += su;
		printf("数を入れて:");
		scanf("%d", &su);
	}
	printf("合計=%d\t平均=%.2f\n", sum, (float)sum / i);

}