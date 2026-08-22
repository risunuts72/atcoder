#include <stdio.h>

int main(void) {
	int n, i;
	int total_length[102] = {0};
	int half, cut, diff;

	scanf("%d\n", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", total_length + i);
		total_length[i] *= 2;
		total_length[i] += total_length[i-1];
	}
	half = total_length[n] / 2;
	for (i = 1; total_length[i] < half; i++) { }
	if (total_length[i] - half > half - total_length[i-1]) {
		diff = (total_length[n] - total_length[i-1]) - total_length[i-1];
	} else {
		diff = total_length[i] - (total_length[n] - total_length[i]);
	}
	printf("%d\n", diff / 2);
	return 0;
}
