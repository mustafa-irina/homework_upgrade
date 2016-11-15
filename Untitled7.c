#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int maxN = 1000;

int main()
{
	char s[maxN];
	fgets(s, maxN, stdin);
	int b = 0;
	int n = strlen(s);
	int i;
	for (i = 0; i < n; i++)
	{
		if (s[i] == '(')
			b++;
		if (s[i] == ')')
				b--;
		if (b < 0)
		{
			printf("Incorrect");
			return 0;
		}
	}
	if (b > 0)
		printf("Incorrect");
	else
		printf("Correct");
	return 0;
}
