#include<stdio.h>

int main(void)
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_data;

	p_data = data;
	printf("�|�C���^���Œ�ŕ\��");
	printf("�z�� data[] = ");
	printf("%d", *p_data);
	p_data++;
	for (; *p_data != -999; p_data++)
	{
		printf(",%d", *p_data);
	}

	printf("�|�C���^��ω������ĕ\��");
	printf("�z�� data[] = ");
	printf("%d", *p_data);
	*p_data++;
	for (; *p_data != -999; *p_data++)
	{
		printf(",%d", *p_data);
	}
}