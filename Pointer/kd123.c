#include<stdio.h>

int main(void)
{
	double a, b;
	double * p_a, * p_b;

	printf("�����l1�H");
	scanf("%lf", &a);
	printf("�����l�Q�H");
	scanf("%lf", &b);

	p_a = &a;
	p_b = &b;

	if (*p_a > *p_b)
	{
		printf("�傫����=%f", *p_a);
	}
	else
	{
		printf("�傫����=%f", *p_b);
	}
}