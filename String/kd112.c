#include<stdio.h>

int main(void)
{
	char data1[100];
	char data2[100];
	int i;

	printf("（コピー元）配列 data1[]=");
	scanf("%s", &data1);

	printf("（コピー先）配列 data2[]=");
	for (i = 0; data1[i] != '\0'; i++)
	{
		data2[i] = data1[i];
	}
	data2[i] = '\0';
	printf("%s", data2);
}