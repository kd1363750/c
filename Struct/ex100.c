#include<stdio.h>

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

void display(struct ken* x,int cnt);

int main(void)
{
	struct ken ken_data[] = { {1,"–kŠC“¹",NULL} };
	struct ken* p, * wp;
	struct ken* x;
	int key,cnt=1;
	x = ken_data;

	printf("ƒƒjƒ…[:\n1:•\Ž¦ 2:’Ç‰Á 3:íœ 9: I—¹");
	scanf("%d", &key);

	while (key != 9)
	{
		if (key == 1)
		{
			display(x,cnt);
		}
	}
}

void display(struct ken*x,int cnt)
{
	for (x; x->code != cnt; x = x->next)
	{
		printf("code = %d name = %s\n", x->code, x->name);
	}
}