#include <stdio.h>
main()
{
	/*�@���������ϐ� moji �̐錾*/
	char moji;
	/*�A�ϐ�moji��A����*/
	moji = 'A';
	/*�B�ϐ�moji�ɉ������������ĉ�ʂ�a��\��*/
	printf("moji:%c\n�������ɕϊ�:%c", moji, moji + 0x20);
}