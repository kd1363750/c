#include<stdio.h>
main()
{
	int h, m, s,a;
	while (1)
	{
		printf("�b������͂��Ă�������:");
		scanf("%d", &s);
		if (s > 5000 || s<0)
		{
			printf("������x���͂��Ă�������");
		}
		else
		{
			break;
		}
	}

	if (s > 5000)
	{
		printf("���Ȃ��̃R���s���[�^�̓R���s���[�^�E�C���X�ɐN����Ă��܂��B\n�����ɉ������Ă�������");
	}
	else
	{
		a = s;
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;

		if (a >= 3600)
		{
			printf("%d����%d��%d�b�ł�\n", h, m, s);
		}
		else if (a >= 60)
		{
			printf("%d��%d�b�ł�\n", m, s);
		}
		else
			printf("%d�b�ł�\n", s);
	}
}