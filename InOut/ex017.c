#include <stdio.h>
main()
{
	float fn1, fn2, fn3;
	printf("1�ڂ̎���:");
	scanf("%f", &fn1);
	printf("2�ڂ̎���:");
	scanf("%f", &fn2);
	printf("3�ڂ̎���:");
	scanf("%f", &fn3);
	printf("���v=%f\n ����=%f\n", fn1 + fn2 + fn3, (fn1 + fn2 + fn3) / 3);
}