#include<stdio.h>
main()
{
	int i, su, sum;
	sum= 0;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &su);
	for (i=0; su != -999; i++)
	{
		sum += su;
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &su);
	}
	printf("‡Œv=%d\t•½‹Ï=%.2f\n", sum, (float)sum / i);

}