#include<stdio.h>
int gokei(int a, int b,int c);
float heikin(float sum);

main()
{
	int a, b, c;
	int sum;
	float avg;
	printf("整数を3つ入力:");
	scanf(" %d%d%d", &a, &b,&c);
	sum = gokei(a, b, c);
	avg = heikin(sum);
	printf("合計は%dです,平均は%.2fです\n", sum,avg);
}

//関数addの処理
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