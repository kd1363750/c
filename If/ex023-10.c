#include<stdio.h>
main()
{
	int h, m, s,a;
	while (1)
	{
		printf("秒数を入力してください:");
		scanf("%d", &s);
		if (s > 5000 || s<0)
		{
			printf("もう一度入力してください");
		}
		else
		{
			break;
		}
	}

	if (s > 5000)
	{
		printf("あなたのコンピュータはコンピュータウイルスに侵されています。\nすぐに解決してください");
	}
	else
	{
		a = s;
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;

		if (a >= 3600)
		{
			printf("%d時間%d分%d秒です\n", h, m, s);
		}
		else if (a >= 60)
		{
			printf("%d分%d秒です\n", m, s);
		}
		else
			printf("%d秒です\n", s);
	}
}