#include <stdio.h>;

int main() {
	int x = 0;
	printf("enter x\n");
	scanf("%d", &x);
	int p = x * x;
	printf("x^4 + x^3 + x^2 + x + 1 = %d",(p + x) * (p + 1) + 1);
	return 0;
}
