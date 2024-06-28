#include<stdio.h>
tbl_gokei3(int tbl[], int number);

int main(void)
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei3(a, 5);
	printf("gokei=%d\n", gokei);
	return 0;
}

tbl_gokei3(int tbl[], int number)
{
	int gokei = 0;
	for (int i = 0; i < number; i++)
	{
		gokei += tbl[i];
	}
	return(gokei);
}