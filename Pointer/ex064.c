#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	char ride[3][11] = { "car","bus","shinkansen" };
	int i;
	char* p;

	for (i = 0; i < 3; i++)
	{
		p = p_ride[i];	//p��p_ride[i]����
		while (*p)	//�o�Q���������̒��g��\0����Ȃ��ԌJ��Ԃ�
		{
			printf("%c",*p++);	//�\���I�������C���N�������g
		}
		printf("\n");
	}
	/*for (i = 0; i < 3; i++)
	{
		while (*p_ride[i])	//�o�Q���������̒��g��\0����Ȃ��ԌJ��Ԃ�
		{
			printf("%c", *p_ride[i]++);	//�\���I�������C���N�������g
		}
		printf("\n");
	}*/
}