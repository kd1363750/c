#include<stdio.h>

int main(void)
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];

	printf("�z��a����z��c�ɃR�s�[\n");

	for (int i = 0; i < 10; i++)
	{
		c[i] = a[i];
	}

	printf("�z�� a =");
	for (int i = 0; i < 10; i++)
	{
		printf("% d", a[i]);
	}

	printf("\n");

	printf("�z�� c =");
	for (int i = 0; i < 10; i++)
	{
		printf("% d", c[i]);
	}
}