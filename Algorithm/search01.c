#include<stdio.h>
main()
{
	int s, i;
	int d[10] = { 10,5,30,77,16,3,57,29,37,33 };

	printf("�T���l�������");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}
	if (i == 10)
	{
		printf("������Ȃ�����");
	}
	else
	{
		printf("�T���l%d���Ad[%d]�Ŕ����I\n",s, i);
	}
}