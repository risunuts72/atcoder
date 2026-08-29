#include <stdio.h>

int main(void) {
	int n, buf, i, remain;
	int counts[101] = {0};

	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &buf);
		counts[buf]++;
	}

	remain = 0;
	for (i = 1; i <= 100; i++) {
		if (counts[i] & 1) {
			remain += i;
		}
	}
	printf("%d\n", remain);
	return 0;
}
