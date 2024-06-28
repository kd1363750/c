#include<stdio.h>

int main(void)
{
	int a = 1,sum=1;

	printf("%d", a);
	while (sum <= 300)
	{

		a++;
		sum += a;
		printf("+%d", a);
	}
	printf("=%d", sum);
}