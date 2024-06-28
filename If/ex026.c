#include<stdio.h>
main()
{
	int month;
	printf("月を入力:");
	scanf("%d", &month);
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		printf("最終日は31日です");
	}
	else
	{
		if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			printf("最終日は30日です");
		}
		else
		{
			if (month == 2)
			{
				printf("最終日は29日です");
			}
			else
			{
				printf("言うことを聞かないあなたにはコンピュータウイルスを差し上げます");
			}
		}
	}
}