#include<stdio.h>

int main(void)
{
	char moji;

	printf("‚P•¶Žš“ü—ÍH");
	scanf("%c", &moji);

	if (moji >= 65 && moji < 91)
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", moji + 32);
	}
	else if (moji >= 97 && moji <= 122)
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", moji - 32);
	}
}