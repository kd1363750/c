#include<stdio.h>

int main(void)
{
	for (;;)
	{
		for (int i = 1; i <= 20; i++)
		{
			if (i % 2 == 0)
			{
				continue;
			}
			printf("%3d", i);
		}
		break;
	}
}