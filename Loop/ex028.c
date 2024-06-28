#include<stdio.h>
main()
{
	int goukei, ia;
	goukei = 0;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &ia);
	while (ia != -999)
	{
		goukei += ia;
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &ia);
	}
	printf("‡Œv=%d\n", goukei);
}