#include<stdio.h>

int main(void)
{
	int a, sum = 0, cnt = 0;

	printf("�����i�[�X�X�X�ŏI���j�H");
	scanf("%d", &a);

	sum += a;
	cnt++;

	while (1)
	{
		if (a == -999)
		{
			break;
		}
		printf("�����i�[�X�X�X�ŏI���j�H");
		scanf("%d", &a);
		if (a < 0)
		{
			continue;
		}
		sum += a;
		cnt++;
	}
	printf("���v=%d", sum);
	printf("����=%.3f", (float)sum / cnt);
}