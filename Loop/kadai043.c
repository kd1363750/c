#include<stdio.h>
main()
{
	int i;

	printf("整数（ー1で入力終了）？");
	scanf("%d", &i);

	while (i != -1)
	{
		printf("%c\n", i);
		printf("整数（ー1で入力終了）？");
		scanf("%d", &i);
	}
}