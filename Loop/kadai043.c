#include<stdio.h>
main()
{
	int i;

	printf("�����i�[1�œ��͏I���j�H");
	scanf("%d", &i);

	while (i != -1)
	{
		printf("%c\n", i);
		printf("�����i�[1�œ��͏I���j�H");
		scanf("%d", &i);
	}
}