#include<stdio.h>

int main(void)
{
	char moji[100];
	int cnt = 0;

	printf("•¶š—ñ‚ÍH");
	scanf("%s", &moji);
	printf("•¶š—ñ = %s\t", moji);

	for (int i = 0; moji[i] != '\0'; i++)
	{
		cnt++;
	}
	printf("•¶š” = %d •¶š", cnt);
}