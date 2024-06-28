#include<stdio.h>
void calculate(int a, int b, int* p_s, float * p_a);
main()
{
	int a, b, s;
	float m;

	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &a, &b);

	calculate(a, b, &s, &m);
	printf("‡Œv‚Í%d,•½‹Ï‚Í%.2f", s, m);
}

void calculate(int a, int b, int* p_s, float * p_a)
{
	*p_s = a + b;
	*p_a = (a + b) / 2.0;
}