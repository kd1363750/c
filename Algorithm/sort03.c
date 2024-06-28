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

	for (i = 1; i < size; i++)
	{
		for (j = i-1; j >=0; j--)
		{
			if (d[j+1] >= d[j])
			{
				break;
			}
			else	//else	‚Í‚È‚­‚Ä‚à‚¢‚¢	
			{
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		printf("%3d", d[i]);
	}
}