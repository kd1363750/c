#include<stdio.h>

int main(void)
{
	int ia, ib;
	printf("�Q�̐��l�H");
	scanf("%d%d", &ia, &ib);

	printf("***%d��%d�̎l�����Z***", ia, ib);
	printf("%d+\n%d=%d\n", ia, ib, ia + ib);
	printf("%d-%d=%d\n", ia, ib, ia - ib);
	printf("%d*%d=%d\n", ia, ib, ia * ib);
	printf("%d/%d=%d���܂�%d\n", ia, ib, ia / ib, ia % ib);
}