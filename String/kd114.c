#include<stdio.h>

int main(void)
{
	char moji[100];
	int cnt = 0;

	printf("文字列は？");
	scanf("%s", &moji);
	printf("文字列 = %s\t", moji);

	for (int i = 0; moji[i] != '\0'; i++)
	{
		cnt++;
	}
	printf("文字数 = %d 文字", cnt);
}