#include<stdio.h>
main()
{
	int data[5],i;

	data[0] = 10;
	data[1] = 20;
	data[2] = 30;
	data[3] = 40;
	data[4] = 50;

	for (i = 0; i < 5; i++)
	{
		printf("a[%d]=%d\n", i, data[i]);
	}
}