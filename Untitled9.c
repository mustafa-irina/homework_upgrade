#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	bool x[10000];
	memset(x, 0, 10000);
	int n = 0;
	printf("enter the number\n");
	scanf("%d", &n);
	int i;
	int j;
	for (i = 2; i <= n; i++)
		if (!x[i])
		{
			printf("%d ", i);
			for (j = 2 * i; j <= n; j += i)
				x[j] = true;
		}
	return 0;
}
