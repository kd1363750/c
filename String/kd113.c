#include<stdio.h>

int main(void)
{
	char moji[100] = "GameSoft";
	int cnt = 0;

	printf("文字列 = %s\n", moji);

	for (int i = 0; moji[i] != '\0'; i++)
	{
		cnt++;
	}
	printf("文字数 = %d 文字", cnt);
}