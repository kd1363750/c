#include<stdio.h>
main()
{
	int j=9,i,a[10] = { 10,20,30,40,50,60,70,80,90,100 },b[10],c[10];

	printf("”z—ña= ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
		b[j] = a[i];
		j--;
	}
	printf("\n");
	printf("”z—ñc= ");
	for (i = 0; i < 10; i++)
	{
		c[i] = b[i];
		printf("%d ", c[i]);
	}
}