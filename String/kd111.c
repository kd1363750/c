#include<stdio.h>

int main(void)
{
	char a[100] = "abcde";

	for (int i = 0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
	}

}