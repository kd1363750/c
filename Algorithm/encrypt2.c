#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[100];
	int i, k[99];//k�̔z��͕�����łȂ��̂�\0���͂���Ȃ�����1���Ȃ��Ă���

	srand(time(0));
	printf("���������͂��Ă�������");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] += k[i];
	}

	printf("�Í����������%s\n", s);
	printf("�Í����L�[�́A");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d", k[i]);
	}

}