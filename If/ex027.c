#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &moji);
	if (moji >= 65 && moji <= 90)
	{
		printf("•ÏŠ·‚·‚é‚Æ%c\n", moji + 32);
	}
	else
	{
		if (moji >= 97 && moji <= 122)
		{
			printf("•ÏŠ·‚·‚é‚Æ%c\n", moji - 32);
		}
		else
		{
			printf("ƒGƒ‰[");
		}
	}
}