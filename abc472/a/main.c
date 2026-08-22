#include <stdio.h>

int main(void) {
	char str[103];
	fgets(str, 103, stdin);
	for (int i = 0; str[i] & 0x40; i++) {
		if (str[i] != 'A') {
			str[i] = '.';
		}
	}
	printf(str);
	return 0;
}
