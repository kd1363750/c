#include<stdio.h>
main()
{
	int i, su, sum;
	sum= 0;
	printf("��������:");
	scanf("%d", &su);
	for (i=0; su != -999; i++)
	{
		sum += su;
		printf("��������:");
		scanf("%d", &su);
	}
	printf("���v=%d\t����=%.2f\n", sum, (float)sum / i);

}