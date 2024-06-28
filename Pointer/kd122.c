#include<stdio.h>

int main(void)
{
	int a = 5, b = 30, wrk, * p_a = &a, * p_b = &b, * p_wrk = &wrk;

	/*実行前の値の表*/
	puts("実行前");
	printf("a=%d b=%d\n", *p_a, *p_b);
	p_wrk = p_a;
	p_a = p_b;
	p_b = p_wrk;

	printf("a=%d b=%d\n", *p_a, *p_b);
}