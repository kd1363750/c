#include<stdio.h>
main()
{
	int s, h, m;
	printf("�b�������:");
	scanf("%d", &s);
	if (s <= 5000)
	{
		if (s >= 0)
		{
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d����%d��%d�b", h, m, s);
		}
		else
		{
			printf("���Ȃ��̃R���s���[�^�̓E�C���X�ɐN����܂���");
		}
	}
	else
	{
		printf("���Ȃ��̃R���s���[�^�̓E�C���X�ɐN����܂���");
	}
}