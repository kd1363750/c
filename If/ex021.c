#include <stdio.h>
main()
{
	int no;
	printf("変数を入力:");
	scanf("%d", &no);
	if (no >= 0)
	{
		printf("入力値はプラスです");
	}
	else
	{
		printf("入力値はマイナスです");
	}
}