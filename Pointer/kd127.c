#include<stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* p_data,sum=0,avg,i;

	p_data = data;
	printf("�z��̓��e\n");
	printf("�z�� data[] = ");
	for (i = 0; i < 5; i++)
	{
		sum += *p_data;
		printf("%f,", *p_data++);
	}
	avg = sum / i ;
	printf("\n���v = %f", sum);
	printf("\n���� = %f", avg);
}