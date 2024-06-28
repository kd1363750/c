#include<stdio.h>

int main(void)
{
	int a;

	printf("文字コード（ー１で入力終了）？");
	scanf("%d", &a);
	while (a != -1)
	{
		printf("%c\n", a);
		printf("文字コード（ー１で入力終了）？");
		scanf("%d", &a);
	}
}