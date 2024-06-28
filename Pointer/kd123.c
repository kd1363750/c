#include<stdio.h>

int main(void)
{
	double a, b;
	double * p_a, * p_b;

	printf("実数値1？");
	scanf("%lf", &a);
	printf("実数値２？");
	scanf("%lf", &b);

	p_a = &a;
	p_b = &b;

	if (*p_a > *p_b)
	{
		printf("大きい方=%f", *p_a);
	}
	else
	{
		printf("大きい方=%f", *p_b);
	}
}