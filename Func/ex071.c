#include<stdio.h>
int gokei(int a, int b,int c);
float heikin(float sum);

main()
{
	int a, b, c;
	int sum;
	float avg;
	printf("������3����:");
	scanf(" %d%d%d", &a, &b,&c);
	sum = gokei(a, b, c);
	avg = heikin(sum);
	printf("���v��%d�ł�,���ς�%.2f�ł�\n", sum,avg);
}

//�֐�add�̏���
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