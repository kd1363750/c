#include<stdio.h>
main()
{
	char i;
	printf("アルファベット？");
	scanf("%c", &i);

	if (i >= 65 && i <= 81)
	{
		printf("その文字は大文字です");
	}
	if (i >= 97 && i <= 113)
	{
		printf("その文字は小文字です");
	}
}