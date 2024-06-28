#include<stdio.h>
main()
{
	/*	int i;

		for (i = 1; i <= 60; i++)
		{
			printf("%d ", i);
			if (i % 20 == 0)
			{
				printf("\n");
			}
		}
	}*/
	/*int i, j;
	for (i = 1; i <= 20; i++)
	{
		printf("%d ", i);
		k++;
	}
	printf("\n");
	for (i = 1; i <= 20; i++)
	{
		printf("%d", i+k);
		k++;
	}
	printf("\n");
	for (i = 1; i <= 20; i++)
	{
		printf("%d", i+k);
		k++;
	}
	printf("\n");
	*/
	int i, j,k=1;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 20; j++)
		{
			printf("%d", k);
			k++;
		}
	}
}