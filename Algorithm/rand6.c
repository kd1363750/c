#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, cpu;

	printf("何を出しますか\n（1:グー 2:チョキ 3:パー）＞");
	scanf("%d", &pl);
	printf("\n\n");

	if (pl == 1)
	{
		printf("プレイヤーは、グーです。");
	}
	if (pl == 2)
	{
		printf("プレイヤーは、チョキです。");
	}
	if (pl == 3)
	{
		printf("プレイヤーは、パーです。");
	}
	printf("\n");

	srand(time(0));
	cpu = rand() % 3 + 1;

	if (cpu == 1)
	{
		printf("コンピュータは、グーです。");
	}
	if (cpu == 2)
	{
		printf("コンピュータは、チョキです。");
	}
	if (cpu == 3)
	{
		printf("コンピュータは、パーです。");
	}
	printf("\n\n\n");

	if ((pl == 1 && cpu == 2)
		|| (pl == 2 && cpu == 3)
		|| (pl == 3 && cpu == 1))
	{
		printf("プレイヤーの勝ちです。\n");
	}
	if ((pl == 1 && cpu == 3)
		|| (pl == 2 && cpu == 1)
		|| (pl == 3 && cpu == 2))
	{
		printf("プレイヤーの負けです。\n");
	}
	if ((pl == 1 && cpu == 1)
		|| (pl == 2 && cpu == 2)
		|| (pl == 3 && cpu == 3))
	{
		printf("あいこです。\n");
	}
	/*
	* cpuを１，２，３じゃなくて０，１，２にするとできる
	if ((pl - cpu + 3) % 3 == 0) {
		printf("プレイヤーの勝ちです\n");
	}
	if ((pl - cpu + 3) % 3 == 1) {
		printf("あいこです\n");
	}
	if ((pl - cpu + 3) % 3 == 2) {
		printf("プレイヤーの負けです\n");
	}
	*/
}