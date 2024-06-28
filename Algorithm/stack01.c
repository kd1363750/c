#include<stdio.h>

#define STACKSIZE 8
int stack[STACKSIZE];
int sp = 0;

void display(void);
int push(int d);
int pop(int* pd);

int main(void)
{
	int key, data, result;

	do 
	{
		printf("\n\n◆プッシュはi、ポップはoを入力して>");
		key = getche();
		printf("\n");

		//プッシュ処理
		if (key == 'i')
		{
			printf("データ入力>");
			scanf("%d", &data);
			result = push(data);
			if (result == -1)
			{
				printf("\n※※※スタックがいっぱいです※※※\n");
			}
			else
			{
				display();
			}
		}

		//ポップ処理
		if (key == 'o')
		{
			result = pop(&data);
			if (result == -1)
			{
				printf("\n※※※スタックが空です※※※\n");
			}
			else
			{
				printf("スタックからデータ（%d）を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}

//スタック表示関数
void display(void)
{
	int i;
	
	printf("\n＝＝＝現在のスタックの内容＝＝＝\n");
	for (i = 0; i < STACKSIZE; i++)
	{
		printf("stack[%2d]は%5d", i, stack[i]);
		if (i == sp)
		{
			printf("←spが示している所(現在spは%d)", sp);//確認用
		}
		printf("\n");
	}
}

//スタックにデータを積む（プッシュする）関数
int push(int d)
{
	if (sp >= STACKSIZE) { return -1; }//スタックがいっぱいの時
	stack[sp] = d;//スタックにｄを入れる
	sp++;//spインクリメント
	return 0;
}

//スタックからデータを取り出す（ポップする）関数
int pop(int* pd)
{
	if (sp <= 0) { return -1; }//スタックが空の時
	sp--;//spデクリメント
	*pd = stack[sp];//スタックからデータを取り出しpd番地の中身に入れる
	stack[sp] = 0;//確認しやすくするため
	return 0;
}