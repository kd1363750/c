#include<stdio.h>

int main(void)
{
	int a, b;
	printf("�����P�H");
	scanf("%d", &a);
	printf("�����Q�H");
	scanf("%d", &b);

	if (a > b)
	{
		printf("%d�̂ق���%d���%d�傫��",a,b,a-b);
	}
	else
	{
		if (a == b)
		{
			printf("%d��%d�͓�����\n", a, b);
		}
		else
		{
			if (a < b)
			{
				printf("%d�̂ق���%d���%d������", a, b, b - a);
			}
		}
	}
}