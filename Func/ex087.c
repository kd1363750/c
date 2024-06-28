#include<stdio.h>

int main(int argc,char *argv[])
{
	int i, su = 0;
	if (argc >= 3)
	{
		for (i = 1; i < argc; i++) {
			su += atoi(argv[i]);
			//printf("%s+%s=%d\n", argv[1], argv[2], atoi(argv[1]) + atoi(argv[2]));
		}
		printf("‚²‚¤‚¯‚¢:%d\n", su);
	}
	else
	{
		printf("ƒGƒ‰[\n");
	}
}