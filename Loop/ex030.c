#include<stdio.h>
main()
{
	int su, cnt;
	printf("整数を入れてne");
	scanf("%d", &su);
	cnt = 0;
	while (cnt < 11)
	{
		printf("%d+%d=%d\n", su, cnt, su + cnt);
		cnt++;
	}
}