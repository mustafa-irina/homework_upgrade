#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("enter the dividend\n");
	int a = 0;
	scanf("%d", &a);
	printf("enter divider\n");
	int b = 0;
	scanf("%d", &b);
	int i = -1;
	int c = abs(a);
	int d = abs(b);
	while (c >= 0)
        {
            c -= d;
            i++;
        }
	if (a * b < 0)
        {
            i = i * (-1);
        }
	printf("partial quotient = %d", i);
	return 0;
}
