#include<stdio.h>

int main(void)
{
	int a, sum = 0, cnt = 0;

	do
	{
		printf("�����i�[�X�X�X�ŏI���j�H");
		scanf("%d", &a);
		if (a != -999)
		{
			sum += a;
			cnt++;
		}
	} while (a != -999);

	printf("���v=%d", sum);
	printf("����=%f", (float)sum / cnt);
}