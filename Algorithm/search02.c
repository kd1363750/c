#include<stdio.h>
main()
{
	int d[] = { 10,5,30,77,16,3,47,29,37,33 };
	int s, i;

	printf("���������Ă�:");
	scanf("%d", &s);

	d[10] = s;
	for (i = 0; d[i] != s; i++);

	if (i >= 10)
	{
		printf("������Ȃ�����");
	}
	else
	{
		printf("%d��%d�ԖڂɌ�����܂���", s,i+1);
	}
}