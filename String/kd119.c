#include<stdio.h>

int main(void)
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int j = 0;

	for (int i = 0; i < 7; i++)
	{
		if (day[i][j] == 's')
		{
			puts(day[i]);
		}
	}
}