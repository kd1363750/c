#include<stdio.h>
main()
{
	int su, cnt;
	printf("����������ne");
	scanf("%d", &su);
	cnt = 0;
	while (cnt < 11)
	{
		printf("%d+%d=%d\n", su, cnt, su + cnt);
		cnt++;
	}
}