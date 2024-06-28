#include<stdio.h>
main()
{
	float x[3][2],avg;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		avg = 0;
		for (j = 0; j < 2;j++)
		{
			printf("x[%d][%d]=", i, j);
			scanf("%f", &x[i][j]);
			avg += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n", i, avg/2);
	}
}