#include<stdio.h>

int main(void)
{
	char moji;

	printf("１文字入力？");
	scanf("%c", &moji);

	if (moji >= 65 && moji < 91)
	{
		printf("変換結果は%c", moji + 32);
	}
	else if (moji >= 97 && moji <= 122)
	{
		printf("変換結果は%c", moji - 32);
	}
}