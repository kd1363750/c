#include<stdio.h>
main()
{
	int su, sum = 0;

	while (1)
	{
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &su);
		if (su == -999) { break; }
		sum += su;
	}
	printf("‡Œv=%d", sum);
}