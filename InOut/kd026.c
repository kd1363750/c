#include<stdio.h>

int main(void)
{
	int ia;
	printf("10進数の数値？");
	scanf("%d", &ia);
	printf("8進数=%o\t", ia);
	printf("16進数=%x\n", ia);
}