#include<stdio.h>
main()
{
	int cnt, i;
	cnt = 0;
	printf("��������:");
	scanf("%d", &i);
	while (cnt != i)
	{
		printf("*");
		cnt += 1;
	}
}