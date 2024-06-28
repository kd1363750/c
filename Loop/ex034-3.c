#include<stdio.h>
main()
{
	int num, i,j;
	printf("”‚ÍH");
	scanf("%d", &num);
	j = 1;
	do
	{
		i = 0;
		do
		{
			printf("*");
			i++;
		} while (i <j);
		printf("\n");
		j++;
		num--;
	} while (num > 0);
}