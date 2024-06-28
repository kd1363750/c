#include<stdio.h>

enum BitState
{
	Base = 0,				//00000000 ’Êíó‘Ô
	Poison = 1 << 0,		//00000001 “Åó‘Ô
	Sleep = 1 << 1,			//00000010 –°‚èó‘Ô
	Paralysis = 1 << 2,		//00000100 ƒ}ƒqó‘Ô
	Burn = 1 << 3,			//00001000 ‚â‚¯‚Çó‘Ô
	AtkUp = 1 << 4,			//00010000 UŒ‚—ÍƒAƒbƒvó‘Ô
	AtkDown = 1 << 5		//00100000 UŒ‚—Íƒ_ƒEƒ“ó‘Ô
};

typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

int main(void)
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("****Œ»İ‚Ìó‘Ô****\n");
	if (s & Poison)
	{
		printf("“Å\n");
	}
	if (s & Sleep)
	{
		printf("‡–°\n");
	}
	if (s & Paralysis)
	{
		printf("ƒ}ƒq\n");
	}
	if (s & Burn)
	{
		printf("‚â‚¯‚Ç\n");
	}
	if (s & AtkUp)
	{
		printf("UŒ‚—ÍƒAƒbƒv\n");
	}
	if (s & AtkDown)
	{
		printf("UŒ‚—Íƒ_ƒEƒ“\n");
	}
	if (s == Base)
	{
		printf("‰Šúó‘Ô\n");
	}
	printf("***********************\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:–°‚è 3:–ƒáƒ 4:‰Î 5:UŒ‚—Íª 6:UŒ‚—Í«	0:“ü—ÍI—¹>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:	//1`6‚É“–‚Ä‚Í‚Ü‚ç‚È‚¢‚Æ‚«
			break;
		}

	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:–°‚è 3:–ƒáƒ 4:‰Î 5:UŒ‚—Íª 6:UŒ‚—Í«	7:‘S•”‰ğœ 0:“ü—ÍI—¹>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		default:	//1`6‚É“–‚Ä‚Í‚Ü‚ç‚È‚¢‚Æ‚«
			break;
		}

	}
}