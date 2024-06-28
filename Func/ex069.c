#include<stdio.h>
main()
{
	int a, b,sum=0,i=0;

	/*printf("®”:");
	for(;scanf("%d",&a)!=EOF;)
	{
		sum += a;
		i++;
		printf("®”:");
	}*/

	/*printf("®”:");
	while (scanf("%d", &a) != EOF)
	{
		sum += a;
		i++;
		printf("®”:");
	}*/

	printf("®”:");
	b = scanf("%d", &a);
	while (b != EOF)
	{
		sum += a;
		printf("®”:");
		b = scanf("%d", &a);
		i++;
	}
	printf("%d\n", sum);
	printf("%.2f\n", (float)sum / i);

}