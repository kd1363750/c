#include<stdio.h>

int main(void)
{
	int a, sum = 0, cnt = 0;

	printf("�����i�[�X�X�X�ŏI���j�H");
	scanf("%d", &a);

	while (1)
	{
		if (a == -999)
		{
			break;
		}
		sum += a;
		cnt++;
		printf("�����i�[�X�X�X�ŏI���j�H");
		scanf("%d", &a);
	}
	printf("���v=%d", sum);
	printf("����=%.3f", (float)sum / cnt);
}