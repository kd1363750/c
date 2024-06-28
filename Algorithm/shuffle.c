#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[20];
	int i, work, target;

	printf("シャッフル前\n");
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}
	printf("\n");
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d] = %2d\n", i, data[i]);
	}

	printf("シャッフル後\n");

	//シャッフル１
	/*srand(time(0));
	for (i = 0; i < 20; i++)
	{
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}
	*/

	//シャッフル２
	srand(time(0));
	for (i = 19; i > 0; i--)
	{
		target = rand() % i;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}

	for (i = 0; i < 20; i++)
	{
		printf("data[%2d] = %2d\n", i, data[i]);
	}
}