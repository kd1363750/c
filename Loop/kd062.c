#include<stdio.h>

int main(void)
{
	int a=20;

	do
	{
		printf("%3d",a);
		a--;

		if (a % 10 == 0)
		{
			printf("\n");
		}

	} while (a > 0);
}