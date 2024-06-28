#include<stdio.h>

int main(void)
{
	char a;
	printf("アルファベット小文字？");
	scanf("%c", &a);
	for (int i = a+1; i < 122; i++)
	{
		printf("%c", i);
	}
}