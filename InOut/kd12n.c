#include<stdio.h>
main()
{
	char* p = "Nippon";
	int i,cnt=0;
	char** p_p;
	p_p = &p;

	while (**p_p != '\0')
	{
		printf("%c", *(*p_p)++);
		cnt++;
	}
	printf("\n");
	*(*p_p)--;

	for(cnt;cnt>0;cnt--)
	{
		printf("%c", *(*p_p)--);
	}
}