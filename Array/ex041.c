#include<stdio.h>
main()
{
	int i;
	float box[3],sum = 0;

	for (i = 0; i <= 2; i++)
	{
		printf("���������:");
		scanf("%f", &box[i]);
		sum +=box[i];
	}
	printf("���v��%.2f�ł�", sum);
	printf("���ς�%.2f�ł�", sum / 3);
}