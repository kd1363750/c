#include<stdio.h>

int main(void)
{
	int a,sum=0,cnt=0;

	printf("�����i-999�ŏI���j�H");
	scanf("%d", &a);

	while (a != -999)
	{
		sum += a;
		printf("�����i-999�ŏI���j�H");
		scanf("%d", &a);
		cnt++;
	}
	printf("���v=%d\n", sum);
	printf("����=%.2f", (float)sum / cnt);
}