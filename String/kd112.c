#include<stdio.h>

int main(void)
{
	char data1[100];
	char data2[100];
	int i;

	printf("�i�R�s�[���j�z�� data1[]=");
	scanf("%s", &data1);

	printf("�i�R�s�[��j�z�� data2[]=");
	for (i = 0; data1[i] != '\0'; i++)
	{
		data2[i] = data1[i];
	}
	data2[i] = '\0';
	printf("%s", data2);
}