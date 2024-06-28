#include<stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int max=0, min=999, i;
	int* p_data;
	
	data[9] = -999;
	p_data = data;
	printf("配列の内容");
	printf("\ndata[] = ");
	for (i = 0; *p_data != -999; i++)
	{
		if (max < *p_data)
		{
			max = *p_data;
		}
		if (min > *p_data)
		{
			min = *p_data;
		}
		printf("%d, ", *p_data++);
	}
	printf("\n最大値 = %d", max);
	printf("\n最小値 = %d", min);
}