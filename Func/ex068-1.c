#include<stdio.h>
main()
{
	int a,b,c;

	printf("����2����>");
	c = scanf("%d%d",&a,&b);

	if (c == EOF) {
		printf("EOF\n");
	}
	else {
		printf("%d����\n", c);
	}
}