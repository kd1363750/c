#include<stdio.h>
main()
{
	int a,b,c;

	printf("数を2個入力>");
	c = scanf("%d%d",&a,&b);

	if (c == EOF) {
		printf("EOF\n");
	}
	else {
		printf("%d個入力\n", c);
	}
}