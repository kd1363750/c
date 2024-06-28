#include<stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* p_data,sum=0,avg,i;

	p_data = data;
	printf("配列の内容\n");
	printf("配列 data[] = ");
	for (i = 0; i < 5; i++)
	{
		sum += *p_data;
		printf("%f,", *p_data++);
	}
	avg = sum / i ;
	printf("\n合計 = %f", sum);
	printf("\n平均 = %f", avg);
}