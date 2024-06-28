#include<stdio.h>

int main(void)
{
	int a;

	printf("®”H");
	scanf("%d", &a);

	for (int i = 0; i <= 10; i++)
	{
		printf("%3d", a + i);
	}
}