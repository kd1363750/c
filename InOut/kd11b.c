#include<stdio.h>

int main(void)
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int a;

	printf("”’l‚ÍH(0`6)");
	scanf("%d", &a);

	if (a == 0)
	{
		puts(day[0]);
	}
	else
	{
		if (a == 1)
		{
			puts(day[1]);
		}
		else
		{
			if (a == 2)
			{
				puts(day[2]);
			}
			else
			{
				if (a == 3)
				{
					puts(day[3]);
				}
				else
				{
					if (a == 4)
					{
						puts(day[4]);
					}
					else
					{
						if (a == 5)
						{
							puts(day[5]);
						}
						else
						{
							if (a == 6)
							{
								puts(day[6]);
							}
						}
					}
				}
			}
		}
	}
}