#include<stdio.h>

int main(void)
{
	char c[100];
	char* c_p;

	c_p = c;

	printf("１文字入力？");
	scanf("%c", &c);


	printf("%c", *c_p);
}