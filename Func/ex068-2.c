#include<stdio.h>
main()
{
	char *p_c;
	char c[256];

	printf("����������>");
	p_c = gets(c);
	while (p_c != NULL) {
		printf("���͂��ꂽ�̂�%s\n", p_c);
		printf("����������>");
		p_c = gets(c);
	}
}