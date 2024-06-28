#include<stdio.h>
void cat(char*a, char *b);

int main(void)
{
	char a[100], b[100];

	printf("”z—ñ a :");
	scanf("%s", &a);
	printf("”z—ñ b :");
	scanf("%s", &b);
	cat(a, b);
	printf("%s", &a);
}

void cat(char*a, char*b)
{
	char *p_a, *p_b;

	p_a = a;
	p_b = b;

	while (*++p_a != '\0');

	while (*p_b != '\0')
	{
		*p_a++ = *p_b++;
	}
	*p_a = '\0';
}