#include<stdio.h>
void str3(char* s1,char*s2);

main()
{
	char str1[256],str2[256];

	printf("•¶Žš—ñ:");
	gets(str1);
	str3(str1, str2);
	printf("%s\n%s", str1, str2);
}

void str3(char* s1,char*s2)
{
	int i, j;

	for (i = 0; *(s1+i) != '\0'; i++);
	for (i--,j=0; i >= 0; i--,j++)
	{
		*(s2+j)=*(s1+i);
	}
	*(s2 + j) = '\0';
}