#include<stdio.h>
main()
{
	int i;
	float box[3],sum = 0;

	for (i = 0; i <= 2; i++)
	{
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		sum +=box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·", sum);
	printf("•½‹Ï‚Í%.2f‚Å‚·", sum / 3);
}