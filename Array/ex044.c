#include<stdio.h>
main()
{
	char moji1[100], moji2[100], moji3[100];
	int i;

	printf("������1�����:");
	scanf("%s", &moji1);
	printf("������Q�����:");
	scanf("%s", &moji2);

	printf("%s\t", moji1);
	printf("%s", moji2);

	printf("\n����ւ����\n");

	for (i = 0; moji1[i] != '\0'; i++)
	{
		moji3[i] = moji1[i];
	}
	moji3[i] = '\0';

	for (i = 0; moji2[i] != '\0'; i++)
	{
		moji1[i] = moji2[i];
	}
	moji2[i] = '\0';

	for (i = 0; moji3[i] != '\0'; i++)
	{
		moji2[i] = moji3[i];
	}
	moji2[i] = '\0';

	printf("%s\t%s", moji1, moji2);

}

/*main()
{
	char s1[10],s2[10]w[10];
	int i;

	printf("������P�����:");
	scanf("%s",s1);
	printf("������Q�����:");
	scanf("%s",s2);

	printf("moji1=%s \t moji2=%s\n",s1,s2);
	printf("����ւ����\n");
	for(i=0;w[i]=s1[i];i++);
	for(i=0;s1[i]=s2[i];i++);
	for(i=0;s2[i]=w[i];i++);
	printf("moji1=%s \t moji2=%s\n",s1,s2);
}*/