#include<stdio.h>
main()
{
	int i, j;

	printf("整数（ー９９９で入力終了）？");
	scanf("%d", &i);

	while (i != -999)
	{
		printf("8進数=%o\t16進数=%x\n", i, i);
		printf("整数（ー９９９で入力終了）？");
		scanf("%d", &i);
	}
}