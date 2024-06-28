#include<stdio.h>

int main(void)
{
	char a;
	printf("アルファベット？");
	scanf("%c", &a);
	if (a >= 65 && a <= 90)
	{
		printf("その文字は「大文字」です");
	}
	else
	{
		if (a >= 97 && a <= 122)
		{
			printf("その文字は「小文字」です");
		}
	}
}