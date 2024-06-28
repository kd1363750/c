#include<stdio.h>
main()
{
	int i, j, num;

	printf("”‚ÍH");
	scanf("%d", &num);

	j = 0;

	do
	{
		i = 0;

		do
		{
			printf(" ");
			i++;
		} while (i < num - j);

		i = 0;

		do
		{
			printf("*");
			i++;
		}while(i < j + 1);

		j++;
		printf("\n");
	} while (j < num);
}