#include<stdio.h>
main()
{
	int year;
	printf("��������:");
	scanf("%d", &year);
	if (year % 100 != 0 && year % 4 == 0||year%400==0)
	{
		printf("���邤�N�ł�\n");
	}
	else
	{
		printf("�c�O�A���邤�N�ł͂���܂���\n");
	}
	printf("��������:");
	scanf("%d", &year);
	if (year % 400 == 0)
	{
		printf("���邤�N�ł�");
	}
	else
	{
		if (year % 100 != 0)
		{
			if (year % 4 == 0)
			{
				printf("���邤�N�ł�");
			}
			printf("���邤��");
		}
		printf("���邤��");
	}

}