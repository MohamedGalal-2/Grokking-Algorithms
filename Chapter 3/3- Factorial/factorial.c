#include <stdio.h>

int factorial(int x);

int main() {
	int x = 0;
	scanf("%d", &x);
	printf("%d", factorial(x));

	return 0;
}

factorial(int x) {
	if (x > 0) {
		return x * factorial(x - 1);
	}
	else {
		return 1;
	}
}