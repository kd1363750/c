#include<stdio.h>
#include<string.h>
#define CNT 4
main()
{
	char* p_tbl[] = { "Poguramming2","Algorithm","Proguramming1","C" }, ** p,*w;
	int i, j;

	p = p_tbl;

	for (i = 0; i < CNT - 1; i++)
	{
		for (j = i + 1; j < CNT; j++)
		{
			if (strcmp(*(p+i), *(p+j)) < 0)
			{
				w = *(p+i);		//*(p+i)‚Íp_tbl[i]‚Æ“¯‚¶
				*(p+i) = *(p+j);
				*(p+j) = w;
			}
		}
	}
	p = p_tbl;
	for (i = 0; i < CNT; i++)
	{
		printf("%s\n", p_tbl[i]);
	}
}