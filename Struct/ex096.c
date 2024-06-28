#include<stdio.h>

struct syohin_data {
	char name[20];
	int tanka;
};

void display3(struct syohin_data* p,int *a);

int main(void)
{
	int a = 10;
	int *p_a;
	p_a = &a;
	struct syohin_data syohin = { "Á‚µƒSƒ€",50 };
	struct syohin_data* p;
	p = &syohin;
	display3(p,p_a);
}

void display3(struct syohin_data* p,int *a)
{
	printf("a=%d\nsyohin.name=%s syohin.tanka=%d\n",*a, p->name, p->tanka);
}