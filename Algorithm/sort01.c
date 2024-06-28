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

	for (i = 0; i < size - 1; i++)
	{
		for (j = i+1; j < size; j++)
		{
			if (d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		printf("%3d", d[i]);
	}
}