#include<stdio.h>

int main(void)
{
	int a, b;

	while (1)
	{
		printf("�����P�i�[�X�X�X�ŏI���j�H");
		scanf("%d", &a);
		printf("�����Q�i�[�X�X�X�ŏI���j�H");
		scanf("%d", &b);
		if (a == 0 || b == 0)continue;
		if (a == -999 || b == -999)break;

		printf("%d/%d=%d���܂�%d\n", a, b, a / b, a % b);
	}
}