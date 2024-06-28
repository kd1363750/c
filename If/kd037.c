#include<stdio.h>

int main(void)
{
	int a;
	printf("0から100までの整数？");
	scanf("%d", &a);

	if (a >= 90)
	{
		printf("その数値の判定結果は「５」です");
	}
	else
	{
		if (a >= 80)
		{
			printf("その数値の判定結果は「４」です");
		}
		else
		{
			if (a >= 50)
			{
				printf("その数値の判定結果は「３」です");
			}
			else
			{
				if (a >= 30)
				{
					printf("その数値の判定結果は「２」です");
				}
				else
				{
					printf("その数値の判定結果は「１」です");
				}
			}
		}
	}
}