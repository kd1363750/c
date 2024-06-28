#include<stdio.h>

int main(void)
{
	int a=1, b, i;

	for (i = 32; i <= 126; i++,a++)
	{
		printf("%0X %c",i,i);
		if (a % 10 == 0)
		{
			printf("\n");
		}
	}
}