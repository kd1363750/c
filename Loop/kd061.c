#include<stdio.h>

int main(void)
{
	int a=1;

	do
	{
		printf("%3d",a);

		if (a % 10 == 0)
		{
			printf("\n");
		}

		a++;
	} while (a < 21);
}