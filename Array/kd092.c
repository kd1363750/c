#include<stdio.h>

int main(void)
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];

	printf("配列aから配列cにコピー\n");

	for (int i = 0; i < 10; i++)
	{
		c[i] = a[i];
	}

	printf("配列 a =");
	for (int i = 0; i < 10; i++)
	{
		printf("% d", a[i]);
	}

	printf("\n");

	printf("配列 c =");
	for (int i = 0; i < 10; i++)
	{
		printf("% d", c[i]);
	}
}