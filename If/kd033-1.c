#include<stdio.h>

int main(void)
{
	char a;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &a);
	if (a >= 65 && a <= 90)
	{
		printf("���̕����́u�啶���v�ł�");
	}
	else
	{
		if (a >= 97 && a <= 122)
		{
			printf("���̕����́u�������v�ł�");
		}
	}
}