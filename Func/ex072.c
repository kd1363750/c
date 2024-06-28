#include<stdio.h>
void display(int a);

main()
{
	int b;
	printf("data？");
	scanf("%d", &b);
	display(b);
}

void display(int c)
{
	printf("入力データ＝%d\n", c);
	return;
}