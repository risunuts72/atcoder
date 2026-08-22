#include <stdio.h>

int main(void) {
	int n, m, cur;
	long k, sum;
	int a[200000] = {0};

	sum = 0L;
	cur = 0;
	scanf("%d %d %ld\n", &n, &m, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &cur);
		if (i >= m) {
			sum -= a[i - m];
		}
		if (sum + cur <= k) {
			sum += cur;
			a[i] = cur;
			puts("Yes");
		} else {
			puts("No");
		}
	}
	return 0;
}
