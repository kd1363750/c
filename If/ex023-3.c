#include<stdio.h>
main()
{
	int s, no1, no2;
	float kotae;
	printf("���Z�q�����:");
	scanf("%d", &s);

	if (s > 0)
	{
		if (s < 5)
		{
			if (s == 1)
			{
				printf("2�̐��������:");
				scanf("%d%d", &no1, &no2);
				kotae = no1 + no2;
				printf("%.0f", kotae);
			}
			else 
			{
				if (s == 2)
				{
					printf("2�̐��������:");
					scanf("%d%d", &no1, &no2);
					kotae = no1 - no2;
					printf("%.0f", kotae);
				}
				else 
				{
					if (s == 3)
					{
						printf("2�̐��������:");
						scanf("%d%d", &no1, &no2);
						kotae = (float)no1 * (float)no2;
						printf("%.0f", kotae);
					}
					else 
					{
						if (s == 4)
						{
							printf("2�̐��������:");
							scanf("%d%d", &no1, &no2);
							kotae = (float)no1 / (float)no2;
							printf("%.3f", kotae);
						}
					}
				}
			}
		}
		else
		{
			printf("���Ȃ��̃R���s���[�^�̓E�C���X�ɐN����܂����I");
		}
	}
	else
	{
		printf("���Ȃ��̃R���s���[�^�̓E�C���X�ɐN����܂����I");
	}

}