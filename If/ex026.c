#include<stdio.h>
main()
{
	int month;
	printf("�������:");
	scanf("%d", &month);
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		printf("�ŏI����31���ł�");
	}
	else
	{
		if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			printf("�ŏI����30���ł�");
		}
		else
		{
			if (month == 2)
			{
				printf("�ŏI����29���ł�");
			}
			else
			{
				printf("�������Ƃ𕷂��Ȃ����Ȃ��ɂ̓R���s���[�^�E�C���X�������グ�܂�");
			}
		}
	}
}