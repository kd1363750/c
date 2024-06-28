#include<stdio.h>
main()
{
	int a[] = { 3,5,7,9,11,13,15,17,19,21 };
	int b[] = { 4,8,12,16,20,24,28,32,38,42 };
	int* p_a, * p_b,*p_c,w;

	p_a = a;
	p_b = b;
	printf("配列a[] = %d", * p_a);
	for (int i = 1; i < 10;i++) {
		printf(",%d", *++p_a);
	}
	printf("\n");
	printf("配列b[] = %d", *p_b);
	for (int i = 1; i < 10; i++) {
		printf(",%d", *++p_b);
	}
	printf("\n");

	p_a = a;
	p_b = &b[9];
	*p_b = *p_a;
	printf("配列a[] = %d", *p_a);
	for (int i = 1; i < 10; i++) {
		p_a++;
		p_b--;
		*p_b = *p_a;
		printf(",%d", *p_a);
	}

	//p_b = b;
	printf("\n");
	printf("配列b[] = %d", *p_b);
	for (int i = 1; i < 10; i++) 
	{
		p_b++;
		printf(",%d", *p_b);
	}
}