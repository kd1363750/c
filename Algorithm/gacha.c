#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int gacha,i;

	srand(time(0));
	for (i = 0; i < 10; i++) {
		gacha = rand() % 100 + 1;

		if (gacha >= 50)
		{
			printf("šƒm[ƒ}ƒ‹\n");
		}
		else {
			if (gacha >= 20)
			{
				printf("ššƒŒƒA\n");
			}
			else {
				if (gacha >= 6)
				{
					printf("šššSR\n");
				}
				else {
					if (gacha >= 2)
					{
						printf("ššššUR\n");
					}
					else {
						printf("šššššLR\n");
					}
				}
			}
		}
	}
}