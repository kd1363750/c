#include<stdio.h>

int main(void)
{
	char moji[100];

	printf("•¶š—ñ‚ÍH");
	scanf("%s", &moji);

	for (int i = 0; moji[i] != '\0'; i++)
	{
		putchar(moji[i]);
		printf("\n");
	}
}