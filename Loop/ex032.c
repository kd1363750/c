#include<stdio.h>
main()
{
	/*int su, i, a;
	printf("数を入れて:");
	scanf("%d", &su);
	for (i = 1; i < 6; i++)
	{
		printf("%d "&su*i);
	}
	*/
	int su, i;
		i = 1;
		printf("好きな値を入力:");
		scanf("%d", &su);
	while (i <= 5)
	{
		printf("%d", su*i);
		i++;
	}
}