#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[100];
	int i, k[99];//kの配列は文字列でないので\0がはいらないから1つ少なくていい

	srand(time(0));
	printf("文字列を入力してください");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] += k[i];
	}

	printf("暗号化文字列は%s\n", s);
	printf("暗号化キーは、");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d", k[i]);
	}

}