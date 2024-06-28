#include<stdio.h>
struct syohin_data {
	char name[50];
	int tanka;
	int kosuu;
};
int main(void)
{
	struct syohin_data syohin[3] = { {"エンピツ",30,5},
									 {"消しゴム",50,2},
									 {"筆箱",500,3} };
	struct syohin_data* p = syohin;//ポインタｐに構造体配列の先頭要素のアドレスをいれる
	int i;

	for (i = 0; i < 3; i++,p++)
	{
		printf("商品名:%s\t", p->name);
		printf("単価:%4d\t", p->tanka);
		printf("個数:%4d\t", p->kosuu);
		printf("金額:￥%4d\n", p->tanka * p->kosuu);
	}
}