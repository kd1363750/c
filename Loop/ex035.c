#include<stdio.h>
main()
{
	int su, sum = 0;

	while (1)
	{
		printf("��������:");
		scanf("%d", &su);
		if (su == -999) { break; }
		sum += su;
	}
	printf("���v=%d", sum);
}