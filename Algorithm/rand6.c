#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, cpu;

	printf("�����o���܂���\n�i1:�O�[ 2:�`���L 3:�p�[�j��");
	scanf("%d", &pl);
	printf("\n\n");

	if (pl == 1)
	{
		printf("�v���C���[�́A�O�[�ł��B");
	}
	if (pl == 2)
	{
		printf("�v���C���[�́A�`���L�ł��B");
	}
	if (pl == 3)
	{
		printf("�v���C���[�́A�p�[�ł��B");
	}
	printf("\n");

	srand(time(0));
	cpu = rand() % 3 + 1;

	if (cpu == 1)
	{
		printf("�R���s���[�^�́A�O�[�ł��B");
	}
	if (cpu == 2)
	{
		printf("�R���s���[�^�́A�`���L�ł��B");
	}
	if (cpu == 3)
	{
		printf("�R���s���[�^�́A�p�[�ł��B");
	}
	printf("\n\n\n");

	if ((pl == 1 && cpu == 2)
		|| (pl == 2 && cpu == 3)
		|| (pl == 3 && cpu == 1))
	{
		printf("�v���C���[�̏����ł��B\n");
	}
	if ((pl == 1 && cpu == 3)
		|| (pl == 2 && cpu == 1)
		|| (pl == 3 && cpu == 2))
	{
		printf("�v���C���[�̕����ł��B\n");
	}
	if ((pl == 1 && cpu == 1)
		|| (pl == 2 && cpu == 2)
		|| (pl == 3 && cpu == 3))
	{
		printf("�������ł��B\n");
	}
	/*
	* cpu���P�C�Q�C�R����Ȃ��ĂO�C�P�C�Q�ɂ���Ƃł���
	if ((pl - cpu + 3) % 3 == 0) {
		printf("�v���C���[�̏����ł�\n");
	}
	if ((pl - cpu + 3) % 3 == 1) {
		printf("�������ł�\n");
	}
	if ((pl - cpu + 3) % 3 == 2) {
		printf("�v���C���[�̕����ł�\n");
	}
	*/
}