#include<stdio.h>
main()
{
	int su, sum = 0;

	while (1)
	{
		printf("数を入れて:");
		scanf("%d", &su);
		if (su == -999) { break; }
		sum += su;
	}
	printf("合計=%d", sum);
}