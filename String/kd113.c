#include<stdio.h>

int main(void)
{
	char moji[100] = "GameSoft";
	int cnt = 0;

	printf("•¶š—ñ = %s\n", moji);

	for (int i = 0; moji[i] != '\0'; i++)
	{
		cnt++;
	}
	printf("•¶š” = %d •¶š", cnt);
}