#include <stdio.h>
main()
{
	float fn1, fn2, fn3;
	printf("1‚Â–Ú‚ÌÀ”:");
	scanf("%f", &fn1);
	printf("2‚Â–Ú‚ÌÀ”:");
	scanf("%f", &fn2);
	printf("3‚Â–Ú‚ÌÀ”:");
	scanf("%f", &fn3);
	printf("‡Œv=%f\n •½‹Ï=%f\n", fn1 + fn2 + fn3, (fn1 + fn2 + fn3) / 3);
}