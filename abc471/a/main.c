#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);

	if (a + b == 9 || a - b == 9 || a * b == 9 || (a / b == 9 && a % b == 0)) {
		puts("Nine");
	} else {
		puts("Nein");
	}
	return 0;
}
