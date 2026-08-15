#include <stdio.h>
#include <string.h>

void to_lowercase(char *str) {
	while (*str) {
		if (*str == '\r' || *str == '\n') {
			*str = 0;
			break;
		}
		*str |= 0x20;
		str++;
	}
}

int main(void) {
	int n;
	char buf[13];
	char strings[101][11] = {0};
	int counts[101] = {0};
	int match = 0;
	int i, j, k;
	int max = 0;

	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		fgets(buf, sizeof(buf), stdin);
		to_lowercase(buf);

		match = 0;
		for (j = 0; strings[j][0]; j++) {
			if (strcmp(buf, strings[j]) == 0) {
				match = 1;
				counts[j]++;
				break;
			}
		}
		if (!match) {
			for (k = 0; buf[k]; k++) {
				strings[j][k] = buf[k];
			}
			strings[j][k] = 0;
			counts[j] = 1;
		}
	}

	for (j = 0; counts[j]; j++) {
		if (max < counts[j]) {
			max = counts[j];
		}
	}
	printf("%d\n", max);
	return 0;
}
