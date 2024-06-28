#include<stdio.h>
main()
{
	int i;
	i = 0;
	while (i != 10)
	{
		i++;
		if (i == 7) { continue; }
		printf("%2d", i);
		if (i == 8) { break; }
		printf("%2d", i);
	}
}