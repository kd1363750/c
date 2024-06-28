#include<stdio.h>
main()
{
	int year;
	printf("西暦を入力:");
	scanf("%d", &year);
	if (year % 100 != 0 && year % 4 == 0||year%400==0)
	{
		printf("うるう年です\n");
	}
	else
	{
		printf("残念、うるう年ではありません\n");
	}
	printf("西暦を入力:");
	scanf("%d", &year);
	if (year % 400 == 0)
	{
		printf("うるう年です");
	}
	else
	{
		if (year % 100 != 0)
		{
			if (year % 4 == 0)
			{
				printf("うるう年です");
			}
			printf("うるうる");
		}
		printf("うるうる");
	}

}