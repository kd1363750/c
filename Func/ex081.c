#include<stdio.h>
int p_max(int* data);
int p_min(int* data);
#define D 8

main()
{
	int data[8] = { 6,10,8,2,9,5,1,11 },max,min;
	max=p_max(data);
	min=p_min(data);
	printf("Å‘å’l=%d\n", max);
	printf("Å¬’l%d\n", min);
}

int p_max(int* data)
{
	int max,i;
	for (max=*data,i=1; i < D; i++)
	{
		if (max < *data)
		{
			max = *data;
		}
		printf("%d\t", max);
	}
	return max;
}

int p_min(int* data)
{
	int min,i;
	for (min=*data,i = 1; i < D; i++)
	{
		if (min > *(data+i))
		{
			min = *(data+i);
		}
	}
	return min;
}