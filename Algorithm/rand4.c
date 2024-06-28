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
	case 1: printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚ÍA™‚Å‚·");
		break;
	case 2: printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚ÍA™™‚Å‚·");
		break;
	case 3: printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚ÍA™™™‚Å‚·");
		break;
	case 4: printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚ÍA™™™™‚Å‚·");
		break;
	case 5: printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚ÍA™™™™™‚Å‚·");
		break;
	}
	*/
	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í,");
	for (i = 0; i < un; i++)
	{
		printf("™");
	}
	printf("‚Å‚·\n");
}