#include<stdio.h>
#include<string.h>
#define YOUSO 5
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

int main(void)
{
	struct profile data[YOUSO];
	struct profile *p;
	int i;
	for (p=data,i = 0; i < YOUSO; i++,p++)
	{
		printf("%d�l�ځi���O�j:", i+1);
		scanf("%s", p->name);
		printf("%d�l�ځi���N�����j:", i + 1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d�l��(���t�^):",i+1);
		scanf("%s", p->blood);
	}

	for (p=data,i = 0; i < YOUSO; i++,p++)
	{
		if (strcmp(p->blood,"A") == 0)
		{
			printf("%s�[�[%d�N%d��%d���� ���t�^�[%s�^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
		
	}
}