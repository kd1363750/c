#include<stdio.h>
main()
{
	int d[] = { 10,5,30,77,16,3,47,29,37,33 };
	int s, i;

	printf("”Žš‚ð“ü‚ê‚Ä‚Ë:");
	scanf("%d", &s);

	d[10] = s;
	for (i = 0; d[i] != s; i++);

	if (i >= 10)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else
	{
		printf("%d‚Í%d”Ô–Ú‚ÉŒ©‚Â‚©‚è‚Ü‚µ‚½", s,i+1);
	}
}