#include<stdio.h>

int main(void)
{
	int ia, ib;
	printf("２つの数値？");
	scanf("%d%d", &ia, &ib);

	printf("***%dと%dの四則演算***", ia, ib);
	printf("%d+\n%d=%d\n", ia, ib, ia + ib);
	printf("%d-%d=%d\n", ia, ib, ia - ib);
	printf("%d*%d=%d\n", ia, ib, ia * ib);
	printf("%d/%d=%dあまり%d\n", ia, ib, ia / ib, ia % ib);
}