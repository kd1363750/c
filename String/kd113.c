#include<stdio.h>

int main(void)
{
	char moji[100] = "GameSoft";
	int cnt = 0;

	printf("������ = %s\n", moji);

	for (int i = 0; moji[i] != '\0'; i++)
	{
		cnt++;
	}
	printf("������ = %d ����", cnt);
}