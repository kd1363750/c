#include<stdio.h>

int main(void)
{
	char moji[100];
	int cnt = 0;

	printf("������́H");
	scanf("%s", &moji);
	printf("������ = %s\t", moji);

	for (int i = 0; moji[i] != '\0'; i++)
	{
		cnt++;
	}
	printf("������ = %d ����", cnt);
}