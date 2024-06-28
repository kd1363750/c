#include<stdio.h>
main()
{
	char *p_c;
	char c[256];

	printf("•¶Žš—ñ‚ð“ü—Í>");
	p_c = gets(c);
	while (p_c != NULL) {
		printf("“ü—Í‚³‚ê‚½‚Ì‚Í%s\n", p_c);
		printf("•¶Žš—ñ‚ð“ü—Í>");
		p_c = gets(c);
	}
}