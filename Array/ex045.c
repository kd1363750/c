#include<stdio.h>
main()
{
	int a[][3] = { {10,20,30},{1,2,3} };
	int  i, j, sum;

	for (i = 0; i < 2; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
		{
			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
			sum += a[i][j];
		}
		printf("%d行目の合計=%d\n", i, sum);
	}
}