#include<stdio.h>
main()
{
	int c[10],j, s = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("����-999�ŏI�� ");
		scanf("%d", &j);
		c[i] = j;
		s++;
		if (j == -999)
		{
			s--;
			break;
		}
	}
	printf("�z��c=");
	for (int i = 0; i < s; i++)
	{
		printf(" %d", c[i]);
	}
}