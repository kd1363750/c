#include<stdio.h>

int main(void)
{
	char s;

	printf("アルファベット？");
	scanf("%c", &s);

	switch (s)
	{
	case 'a':printf("America\nAustralia\n");
		break;
	case 'e':printf("England\n");
		break;
	case 'f':printf("France\n");
		break;
	case 'j':printf("Japan\n");
		break;
	}
}