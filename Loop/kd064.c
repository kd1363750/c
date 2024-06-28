#include<stdio.h>

int main(void)
{
	int a=20;

	while(a>0)
	{
		printf("%3d",a);
		a--;

		if (a % 10 == 0)
		{
			printf("\n");
		}

	}
}