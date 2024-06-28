#include<stdio.h>

int main(void)
{
	int a=1;

	while(a<=20)
	{
		printf("%3d",a);

		if (a % 10 == 0)
		{
			printf("\n");
		}

		a++;
	}
}