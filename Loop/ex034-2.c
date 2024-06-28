#include<stdio.h>
main()
{
	int i, j , su;
	printf("”‚ÍH");
	scanf("%d", &su);

	/*for (i = 1; i <= su; i++)
	{
		for (j = 1; j <= su; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	i = 1;
	j = 1;
	do
	{
			do
			{
				printf("*");
				j++;
			} while (j <= su);
			printf("\n");
			j = 1;
			i++;
	} while (i <= su);
}