#include<stdio.h>
int add(char a);
main()
{
	char c;
	int ret;
	printf("�A���t�@�x�b�g1����:");
	scanf("%c", &c);
	ret = add(c);
	if (ret == 1)
	{
		printf("�߂�l��%d�Ȃ̂ő啶���ł�",ret);
	}
	else
	{
		printf("�߂�l��%d�Ȃ̂ŏ������ł�",ret);
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