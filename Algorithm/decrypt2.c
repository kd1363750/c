#include<stdio.h>
main()
{
	char s[21];
	int i,j;

	printf("文字列を入力してください");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]の復号化キー＞", i);
		scanf("%d", &j);
		s[i] -= j;
	}
	printf("復号化済み文字列は%s", s);
}