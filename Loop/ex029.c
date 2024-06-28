#include<stdio.h>
main()
{
	int cnt, i;
	cnt = 0;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &i);
	while (cnt != i)
	{
		printf("*");
		cnt += 1;
	}
}