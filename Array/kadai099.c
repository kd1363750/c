#include<stdio.h>
main()
{
	char i[100];
	int cnt,j;

	printf("‰ñ”‚Æ•¶š—ñ‚ğ“ü—Í:");
	scanf("%d%s", &cnt, i);

	for (j = 0; j < cnt; j++)
	{
		printf("%s\t", i);
	}
}