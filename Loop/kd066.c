#include<stdio.h>

int main(void)
{
	int a = 1, sum = 1;

	printf("%d", a);

	do
	{
		a++;
		printf("+%d",a);
		sum += a;
	} while (sum <= 300);

	printf("=%d", sum);
}