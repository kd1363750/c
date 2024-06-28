#include<stdio.h>
main()
{
	char* day[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",NULL };
	char** p=day;

	for (int i = 0; i<7; i++)
	{
		printf("%s\n", day[i]);
	}

	for (int i = 0; i < 7; i++)
	{
		printf("%s\n", *p++);
	}
	p = day;
	while (*p)
	{
		printf("%s\n", *p++);
	}
}