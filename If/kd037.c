#include<stdio.h>

int main(void)
{
	int a;
	printf("0����100�܂ł̐����H");
	scanf("%d", &a);

	if (a >= 90)
	{
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�");
	}
	else
	{
		if (a >= 80)
		{
			printf("���̐��l�̔��茋�ʂ́u�S�v�ł�");
		}
		else
		{
			if (a >= 50)
			{
				printf("���̐��l�̔��茋�ʂ́u�R�v�ł�");
			}
			else
			{
				if (a >= 30)
				{
					printf("���̐��l�̔��茋�ʂ́u�Q�v�ł�");
				}
				else
				{
					printf("���̐��l�̔��茋�ʂ́u�P�v�ł�");
				}
			}
		}
	}
}