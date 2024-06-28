#include<stdio.h>
main()
{
	//整数型変数no1とno2を宣言
	int no1, no2;
	//1つ目の整数;と画面表示
	printf("1つ目の整数:");
	//キーボードから整数を入力し、no1に代入
	scanf("%d", &no1);
	2つ目の整数:と画面表示
	printf("2つ目の整数:");
	//キーボードから整数を入力し、no2に代入
	scanf("%d", &no2);
	//変数no1とno2の加算結果を画面表示
	printf("合計は%dです", no1 + no2);
}