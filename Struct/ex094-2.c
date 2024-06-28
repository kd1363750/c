#include<stdio.h>
#include<string.h>
#define YOUSO 5

struct day {
	int nen;
	int tuki;
	int hi;
};

struct profile {
	char name[20];
	struct day date;
	char blood[5];
};


int main(void)
{
	struct profile data[YOUSO] = { {"¼",2020,8,2,"A"},
									{"‘å",2006,2,14,"B"},
									{"‹´",2005,7,1,"A"},
									{"‰ª",2003,6,15,"O"},
									{"‚",2005,7,13,"AB"} };
	struct profile* p;
	int i;
	for (p = data, i = 0; i < YOUSO; i++, p++)
	{
		if (p->data.tuki == 2)
		{
			printf("%s[[%d”N%dŒ%d“ú¶ ŒŒ‰tŒ^[%sŒ^\n", p->name, p->data.nen, p->data.tuki, p->date.hi, p->blood);
		}
	}
}