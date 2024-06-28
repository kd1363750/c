#include<stdio.h>
main()
{
	char a1,a2,a3;
	a1 = 'A';
	a2 = 'a';
	a3 = '0';
	printf("A:%d 0x%x B:%d 0x%x\n", a1, a1, a1 + 1, a1 + 1);
	printf("C:%d 0x%x a:%d 0x%x\n", a1 + 2, a1 + 2, a2, a2);
	printf("b:%d 0x%x c:%d 0x%x\n", a2 + 1, a2 + 1, a2 + 2, a2 + 2);
	printf("0:%d 0x%x 1:%d 0x%x\n", a3, a3, a3 + 1, a3 + 1);
	printf("2:%d 0x%x  :%d 0x%x\n", a3 + 2, a3 + 2, a3 - 16, a3 - 16);
}