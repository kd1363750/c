#include<stdio.h>
main()
{
	char moji;
	printf("���������:");
	scanf("%c", &moji);
	if (moji >= 65 && moji <= 90)
	{
		printf("�ϊ������%c\n", moji + 32);
	}
	else
	{
		if (moji >= 97 && moji <= 122)
		{
			printf("�ϊ������%c\n", moji - 32);
		}
		else
		{
			printf("�G���[");
		}
	}
}