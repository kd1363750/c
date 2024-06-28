#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	char ride[3][11] = { "car","bus","shinkansen" };
	int i;
	char* p;

	for (i = 0; i < 3; i++)
	{
		p = p_ride[i];	//p‚Ép_ride[i]‚ğ‘ã“ü
		while (*p)	//‚oQ‚’‚‰‚„‚…‚Ì’†g‚ª\0‚¶‚á‚È‚¢ŠÔŒJ‚è•Ô‚·
		{
			printf("%c",*p++);	//•\¦I‚í‚Á‚½ŒãƒCƒ“ƒNƒŠƒƒ“ƒg
		}
		printf("\n");
	}
	/*for (i = 0; i < 3; i++)
	{
		while (*p_ride[i])	//‚oQ‚’‚‰‚„‚…‚Ì’†g‚ª\0‚¶‚á‚È‚¢ŠÔŒJ‚è•Ô‚·
		{
			printf("%c", *p_ride[i]++);	//•\¦I‚í‚Á‚½ŒãƒCƒ“ƒNƒŠƒƒ“ƒg
		}
		printf("\n");
	}*/
}