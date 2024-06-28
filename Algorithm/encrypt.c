#include<stdio.h>
main()
{
	char s[100];
	int i;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢>");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] += 1;
	}
	printf("ˆÃ†‰»•¶š—ñ‚Í %s\n", s);

	printf("ˆÃ†‰»‚µ‚½•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] -= 1;
	}
	printf("•œ†Ï‚İ•¶š—ñ‚Í%s", s);
}