#include<stdio.h>
int gokei(int a, int b,int c);
float heikin(float sum);

main()
{
	int a, b, c;
	int sum;
	float avg;
	printf("®”‚ğ3‚Â“ü—Í:");
	scanf(" %d%d%d", &a, &b,&c);
	sum = gokei(a, b, c);
	avg = heikin(sum);
	printf("‡Œv‚Í%d‚Å‚·,•½‹Ï‚Í%.2f‚Å‚·\n", sum,avg);
}

//ŠÖ”add‚Ìˆ—
int gokei(int a, int b,int c)
{
	int ans;
	ans = a + b + c;
	return(ans);
}

float heikin(float sum)
{
	float ans;
	ans = sum / 3;
	return(ans);
}