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
	case 1: printf("�����̂��Ȃ��̉^���́A���ł�");
		break;
	case 2: printf("�����̂��Ȃ��̉^���́A�����ł�");
		break;
	case 3: printf("�����̂��Ȃ��̉^���́A�������ł�");
		break;
	case 4: printf("�����̂��Ȃ��̉^���́A���������ł�");
		break;
	case 5: printf("�����̂��Ȃ��̉^���́A�����������ł�");
		break;
	}
	*/
	printf("�����̂��Ȃ��̉^����,");
	for (i = 0; i < un; i++)
	{
		printf("��");
	}
	printf("�ł�\n");
}