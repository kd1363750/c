#include<stdio.h>
main()
{
	char *p_c;
	char c[256];

	printf("文字列を入力>");
	p_c = gets(c);
	while (p_c != NULL) {
		printf("入力されたのは%s\n", p_c);
		printf("文字列を入力>");
		p_c = gets(c);
	}
}