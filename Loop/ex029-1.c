#include<stdio.h>
main() 
{
	int su;
	printf("数を入れてね");
	scanf("%d", &su);

	//while(su>0)
	while (su)
	{
		printf("*");
		su--;
	}
}