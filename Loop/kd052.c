#include<stdio.h>

int main(void)
{
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 20; j++)
		{
			printf("%3d", i * j);
		}
		printf("\n");
	}
}