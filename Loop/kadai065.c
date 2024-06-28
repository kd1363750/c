#include<stdio.h>
main()
{
	int su = 0;
	int sum = 0; 
	int cnt = 0;

	do
	{
		cnt++;
		sum += su;
		printf("®”i|‚X‚X‚Xj‚ÅI—¹H");
		scanf("%d", &su);
	} while (su != -999);

	cnt--;
	printf("‡Œv=%d", sum);
	printf("•½‹Ï=%.2f", (float)sum / cnt);
}