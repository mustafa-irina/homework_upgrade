#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char s[1000];
	char s1[1000];
	printf("enter the string\n");
	fgets(s, 1000, stdin);
	printf("enter a substring\n");
	fgets(s1, 1000, stdin);
	int n = strlen(s);
	int m = strlen(s1);
	s1[m - 1] = 0;
	m--;
	int k = 0;
	int i;
	int j;
	for (i = 0; i < n - m + 1; i++)
	{
		bool r = false;
		for (j = i; j < m + i; j++)
			if (s[j] != s1[j - i])
			{
				r = true;
				break;
			}
		if (!r)
			k++;
	}
	printf("%d", k);
	return 0;
}
