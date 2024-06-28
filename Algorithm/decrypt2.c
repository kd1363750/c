#include<stdio.h>
main()
{
	char s[21];
	int i,j;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]‚Ì•œ†‰»ƒL[„", i);
		scanf("%d", &j);
		s[i] -= j;
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ‚Í%s", s);
}