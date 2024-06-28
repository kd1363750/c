#include<stdio.h>

int main(void)
{
	int a;
	printf("整数（ー９９９で入力終了）？");
	scanf("%d", &a);

	while (a != -999)
	{
		printf("8進数=%o\t16進数=%X\n", a, a);
		printf("整数（ー９９９で入力終了）？");
		scanf("%d", &a);
	}
}