#include<stdio.h>

int main(void)
{
	int a;
	char s;
	printf("１０進数の整数？");
	scanf("%d", &a);

	printf("アルファベット(o or h or d)？");
	scanf("%*c%c", &s);

	switch (s)
	{
	case 'o':printf("%o", a);
		break;
	case'O':printf("%o", a);
		break;
	case'h':printf("%x", a);
		break;
	case'H':printf("%x", a);
		break;
	default:printf("%d", a);
	}
}