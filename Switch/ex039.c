#include<stdio.h>
main()
{
	char i;
	int a, b, c;
	printf("���������:");
	scanf("%c", &i);
	printf("���������:");
	scanf("%d%d%d", &a, &b, &c);
	switch (i)
	{
	case 'd':
	case 'D':
		if (a > b)
		{
			if (a > c)
			{
				printf("�ő�l��%d�ł�\n", a);
			}
			else
			{
				printf("�ő�l��%d�ł�\n", c);
			}
		}
		else
		{
			if (b > c) {
				printf("�ő�l��%d�ł�\n", b);
			}
			else
			{
				printf("�ő�l��%d�ł�\n", c);
			}
		}
		break;
	case 's':
	case 'S':
		if (a < b)
		{
			if (a < c)
			{
				printf("�ŏ��l��%d�ł�\n", a);
			}
			else
			{
				printf("�ŏ��l��%d�ł�\n", c);
			}
		}
		else
		{
			if (b < c)
			{
				printf("�ŏ��l��%d�ł�\n", b);
			}
			else
			{
				printf("�ŏ��l��%d�ł�\n", c);
			}
		}
		break;
	case'g':
	case'G':
			printf("���v��%d�ł�\n", a + b + c);
			break;
	case'h':
	case'H':
		printf("���ς�%.2f�ł�\n", (float)(a + b + c)/3.0);
		break;
	default:
		printf("�G���[�����(d:�ő�l s:�ŏ��l g:���v h:����)");
	}
}