#include<stdio.h>

int main(void)
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_data;

	p_data = data;
	printf("ポインタを固定で表示");
	printf("配列 data[] = ");
	printf("%d", *p_data);
	p_data++;
	for (; *p_data != -999; p_data++)
	{
		printf(",%d", *p_data);
	}

	printf("ポインタを変化させて表示");
	printf("配列 data[] = ");
	printf("%d", *p_data);
	*p_data++;
	for (; *p_data != -999; *p_data++)
	{
		printf(",%d", *p_data);
	}
}