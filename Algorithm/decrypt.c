#include<stdio.h>
main()
{
	char s[100];
	int i;

	printf("���������͂��ĉ�����>");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] += 1;
	}
	printf("�Í���������� %s\n", s);

	printf("�Í����������������͂��Ă�������>");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] -= 1;
	}
	printf("�����ςݕ������%s", s);
}