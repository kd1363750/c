#include<stdio.h>
void display1(int a1);
void display2(int *a2);

main()
{
	int a, b;
	printf("���la:");
	scanf("%d", &a);
	display1(a);
	printf("a=%d\n\n", a);

	printf("���lb:");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);
}

void display1(int a)
{
	printf("���la�́A%d�ł��B\n", a);
	a += 10;
}

void display2(int* a)
{
	printf("���lb�́A%d�ł��B\n", *a);
	*a += 10;
}