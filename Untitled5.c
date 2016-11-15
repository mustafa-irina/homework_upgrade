#include <stdio.h>


void p(int lb, int rb, int x[])
{
    int i;
	int md = (lb + rb) / 2;
	for (i = lb; i <= md; i++)
		swap(&x[i], &x[rb - i + lb]);
}

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int i;
	int x[1000];
	printf("enter m\n");
	int m = 0;
	scanf("%d", &m);
	printf("enter n\n");
	int n = 0;
	scanf("%d", &n);
	printf("enter array x\n");
	for (i = 0; i < m + n; i++)
	{
		scanf("%d", &x[i]);
	}
	p(0, m - 1, x);
	p(m, n + m - 1, x);
	p(0, n + m - 1, x);
	for (i = 0; i < m + n; i++)
	{
		printf("%d ", x[i]);
	}
	return 0;
}
