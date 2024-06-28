#include<stdio.h>
main()
{
	int i;
	char data[] = { "Apple" };

	printf("１文字ずつ表示\n");
	for (i = 0; i < data[i]!='\0'; i++)
		//for (i = 0; i < 5; i++)
	{
		printf("%c", data[i]);
	}
	printf("\n");
	printf("文字列を表示\n%s\n", data);
	main2();
}
main2()
{
	int i=0;
	char data[] = { "Apple" };

	printf("1文字ずつ表示\n");
	while (data[i] !='\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n");
	printf("文字列を表示\n%s\n", data);
	return 0;
}