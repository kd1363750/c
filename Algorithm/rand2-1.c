#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, b, c,i;
	srand(time(0));
	for (i = 0; i < 3; i++) 
	{
		a = rand() % 100;
		printf("�l��%d�ł�", a);

	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		b = (rand() % 41) + 10;
		printf("�l��%d�ł�", b);
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		c = (rand() % 301) - 100;
		printf("�l��%d�ł�", c);
	}
	printf("\n");
}