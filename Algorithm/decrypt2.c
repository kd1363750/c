#include<stdio.h>
main()
{
	char s[21];
	int i,j;

	printf("���������͂��Ă�������");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]�̕������L�[��", i);
		scanf("%d", &j);
		s[i] -= j;
	}
	printf("�������ςݕ������%s", s);
}