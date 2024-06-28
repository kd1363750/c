#include<stdio.h>
main()
{
	int d[] = { 3,33,154,53,38,35,47,512,6,58,96 };
	int s, mid, high=10, low=0,i,j,min;

	for (i = 0; i < 11; i++)
	{
		printf("%d\t", d[i]);
	}

	printf("\n");

	for (i = 0; i <= 10; i++)
	{
		mid = i;
		min = d[i];
		for (j = i + 1; j <= 10; j++)
		{
			if (min > d[j])
			{
				min = d[j];
				mid = j;
			}
		}
		d[mid] = d[i];
		d[i] = min;
	}

	for (i = 0; i < 11; i++)
	{
		printf("%d\t", d[i]);
	}

	printf("\nD‚«‚È’l‚ð“ü‚ê‚Ä‚Ë");
	scanf("%d", &s);

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (s == d[mid])
		{
			break;
		}
		else
		{
			if (s < d[mid])
			{
				high = mid - 1;
			}
			else
			{
				if (s > d[mid])
				{
					low = mid + 1;
				}
			}
		}
	}
	if (s == d[mid])
	{
		printf("%d”Ô–Ú‚É%d‚ÍŒ©‚Â‚©‚è‚Ü‚µ‚½", mid+1, s);
	}
	else
	{
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½");
	}
}