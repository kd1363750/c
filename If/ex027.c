#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力:");
	scanf("%c", &moji);
	if (moji >= 65 && moji <= 90)
	{
		printf("変換すると%c\n", moji + 32);
	}
	else
	{
		if (moji >= 97 && moji <= 122)
		{
			printf("変換すると%c\n", moji - 32);
		}
		else
		{
			printf("エラー");
		}
	}
}