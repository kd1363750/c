#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un,i;
	srand(time(0));
	un = rand() % 5 + 1;
	/*switch (un)
	{
	case 1: printf("今日のあなたの運勢は、☆です");
		break;
	case 2: printf("今日のあなたの運勢は、☆☆です");
		break;
	case 3: printf("今日のあなたの運勢は、☆☆☆です");
		break;
	case 4: printf("今日のあなたの運勢は、☆☆☆☆です");
		break;
	case 5: printf("今日のあなたの運勢は、☆☆☆☆☆です");
		break;
	}
	*/
	printf("今日のあなたの運勢は,");
	for (i = 0; i < un; i++)
	{
		printf("☆");
	}
	printf("です\n");
}