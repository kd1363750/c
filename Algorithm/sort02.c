#include<stdio.h>
#define size 5
main()
{
	int d[] = { 30,7,25,16,10 };
	int i, j, w;

	for (i = 0; i < size; i++)
	{
		printf("%3d", d[i]);
	}
	printf("\n");

	for (i = size-1; i > 0; i--) 
	{
		for (j = 0; j < i; j++)
		{
			if (d[j] > d[j + 1])
			{
				w = d[j];
				d[j] = d[j+1];
				d[j + 1] = w;
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		printf("%3d", d[i]);
	}
}