#include<stdio.h>

int main(void)
{
	char moji;

	printf("�P�������́H");
	scanf("%c", &moji);

	if (moji >= 65 && moji < 91)
	{
		printf("�ϊ����ʂ�%c", moji + 32);
	}
	else if (moji >= 97 && moji <= 122)
	{
		printf("�ϊ����ʂ�%c", moji - 32);
	}
}