#include<stdio.h>

int main(void)
{
	int a, b;
	char ope;

	printf("®”‚PH");
	scanf("%d", &a);
	printf("®”‚QH");
	scanf("%d", &b);
	printf("‰‰ZqH");
	scanf("%*c%c", &ope);

	switch(ope)
	{
	case'+':printf("%d%c%d=%d", a, ope, b, a + b);
		break;
	case'-':printf("%d%c%d=%d", a, ope, b, a - b);
		break;
	case'*': printf("%d%c%d=%d", a, ope, b, a * b);
		break;
	case '/':printf("%d%c%d=%d", a, ope, b, a / b);
		break;
	case '%':printf("%d%c%d=%d", a, ope, b, a % b);
	}
}