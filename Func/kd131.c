#include<stdio.h>
void moji(char m);

int main(void)
{
	char m;
	char s[256];

	printf("•¶Žš:");
	m = getchar();

	while (m != EOF)
	{
		moji(m);
		gets(s);

		printf("•¶Žš:");
		m=getchar();
	}
}

void moji(char m)
{
	printf("%c\n", m);
}