#include <stdio.h>

int main(void) {
	int c;
	c = getchar();
	if (c == 'B') {
		puts("Y");
	} else if (c == 'Y') {
		puts("R");
	} else {
		puts("B");
	}
	return 0;
}
