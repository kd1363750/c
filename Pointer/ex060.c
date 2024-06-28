#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data, moji;
	int i;

	p_data = data;
	printf("data[] = %s\n", data);
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &moji);

	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (i = 0; *(p_data+i) != '\0'; i++)
	{
		if (moji == *(p_data+i))
		{
			printf("%d ", i+1);
		}
	}
	printf("•¶š–Ú‚Å‚·\n");
}