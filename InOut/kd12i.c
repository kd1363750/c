#include<stdio.h>

int main(void)
{
	char a[10] = "mikan", b[10];
	char* p_a, * p_b;

	p_a = a;
	p_b = b;
	
	while (*p_a != '\0')
	{
		*p_b = *p_a;
		*p_a++;
		*p_b++;
	}
	*p_b = '\0';
	printf("ƒRƒs[æ‚Ì•¶š—ñ=%s", b);
}