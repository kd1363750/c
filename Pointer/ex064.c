#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	char ride[3][11] = { "car","bus","shinkansen" };
	int i;
	char* p;

	for (i = 0; i < 3; i++)
	{
		p = p_ride[i];	//pにp_ride[i]を代入
		while (*p)	//Ｐ＿ｒｉｄｅの中身が\0じゃない間繰り返す
		{
			printf("%c",*p++);	//表示終わった後インクリメント
		}
		printf("\n");
	}
	/*for (i = 0; i < 3; i++)
	{
		while (*p_ride[i])	//Ｐ＿ｒｉｄｅの中身が\0じゃない間繰り返す
		{
			printf("%c", *p_ride[i]++);	//表示終わった後インクリメント
		}
		printf("\n");
	}*/
}