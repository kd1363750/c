#include <stdio.h>
main()
{
	/*�@文字が多変数 moji の宣言*/
	char moji;
	/*�A変数mojiにAを代入*/
	moji = 'A';
	/*�B変数mojiに何か処理をして画面にaを表示*/
	printf("moji:%c\n小文字に変換:%c", moji, moji + 0x20);
}