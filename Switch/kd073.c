#include<stdio.h>

int main(void)
{
	int a;
	char s;
	printf("�P�O�i���̐����H");
	scanf("%d", &a);

	printf("�A���t�@�x�b�g(o or h or d)�H");
	scanf("%*c%c", &s);

	switch (s)
	{
	case 'o':printf("%o", a);
		break;
	case'O':printf("%o", a);
		break;
	case'h':printf("%x", a);
		break;
	case'H':printf("%x", a);
		break;
	default:printf("%d", a);
	}
}