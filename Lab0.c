#include <stdio.h>
int
main() {
	int a, b, c;
	printf("Enter first number\n");
	scanf("%d", &a);
	printf("Enter second number \n");
	scanf("%d", &b);
	printf("Enter third number \n");
	scanf("%d", &c);
	if (c == 0) {
		printf("Wrong number");
		return 1;
	}
	printf(" %d mod %d = %d \n", a, c, a % c);

	return 0;
}