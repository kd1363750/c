#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int data[20];
	int i, work, target;

	printf("�V���b�t���O\n");
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}
	printf("\n");
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d] = %2d\n", i, data[i]);
	}

	printf("�V���b�t����\n");

	//�V���b�t���P
	/*srand(time(0));
	for (i = 0; i < 20; i++)
	{
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
	}
	*/

	//�V���b�t���Q
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