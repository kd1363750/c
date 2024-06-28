#include<stdio.h>
main()
{
	int a,b,c;

	printf("”‚ð2ŒÂ“ü—Í>");
	c = scanf("%d%d",&a,&b);

	if (c == EOF) {
		printf("EOF\n");
	}
	else {
		printf("%dŒÂ“ü—Í\n", c);
	}
}