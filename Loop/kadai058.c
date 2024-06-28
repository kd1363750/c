#include<stdio.h>
main()
{
	int i, j=0;

	for (i = 32; i <= 126; i++)
	{
		j++;
		printf("%x %C ", i, i);
		if (j % 10 == 0)
		{
			printf("\n");
		}
	}
}