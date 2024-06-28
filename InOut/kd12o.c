#include<stdio.h>

int main(void)
{
	char* p = "pointer test program";
	char save[256];
	int i;

	for(i=0;*p!='\0';i++)
	{
		save[i] = *p++;
	}
	i++;
	save[i] = '\n';
	printf("%s", save);

}