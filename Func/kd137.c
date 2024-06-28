#include<stdio.h>
int add(char a);
main()
{
	char c;
	int ret;
	printf("アルファベット1文字:");
	scanf("%c", &c);
	ret = add(c);
	if (ret == 1)
	{
		printf("戻り値は%dなので大文字です",ret);
	}
	else
	{
		printf("戻り値は%dなので小文字です",ret);
	}
}

int add(char a)
{
	if ( 0x41<= a && a <= 0x5A)
	{
		return(1);
	}
	else if (0x61 <= a && a <= 0x7A)
	{
		return(0);
	}
}