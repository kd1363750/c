#include<stdio.h>
struct syohin_data {
	char name[50];
	int tanka;
	int kosuu;
};
int main(void)
{
	struct syohin_data syohin[3] = { {"�G���s�c",30,5},
									 {"�����S��",50,2},
									 {"�M��",500,3} };
	struct syohin_data* p = syohin;//�|�C���^���ɍ\���̔z��̐擪�v�f�̃A�h���X�������
	int i;

	for (i = 0; i < 3; i++,p++)
	{
		printf("���i��:%s\t", p->name);
		printf("�P��:%4d\t", p->tanka);
		printf("��:%4d\t", p->kosuu);
		printf("���z:��%4d\n", p->tanka * p->kosuu);
	}
}