#include <stdio.h>

int main()
{
	printf("Number of all the lucky tickets of 6 digits\n");
	int n = 1e6;
	int k = 0;
	int i;
	int j;
	for (i = 0; i < n; i++)
	{
		int s1 = 0;
		int x = i;
		for (j = 0; j < 3; j++)
		{
			s1 += x % 10;
			x = x / 10;
		}
		int s2 = 0;
		for (j = 0; j < 3; j++)
		{
			s2 += x % 10;
			x = x / 10;
		}
		if (s1 == s2)
			k++;
	}
	printf("%d", k);
	return 0;
}
