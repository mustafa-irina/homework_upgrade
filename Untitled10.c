#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int k = 0;
	printf("enter the number of array elements\n");
	int n = 0;
	scanf("%d", &n);
	printf("enter elements array\n");
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a == 0)
			k++;
	}
	printf("the number of zero elements in the array %d", k);
	return 0;
}
