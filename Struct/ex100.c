#include<stdio.h>

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

void display(struct ken* x,int cnt);

int main(void)
{
	struct ken ken_data[] = { {1,"�k�C��",NULL} };
	struct ken* p, * wp;
	struct ken* x;
	int key,cnt=1;
	x = ken_data;

	printf("���j���[:\n1:�\�� 2:�ǉ� 3:�폜 9: �I��");
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