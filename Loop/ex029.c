#include<stdio.h>
main()
{
	int cnt, i;
	cnt = 0;
	printf("数を入れて:");
	scanf("%d", &i);
	while (cnt != i)
	{
		printf("*");
		cnt += 1;
	}
}