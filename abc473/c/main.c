#include <stdio.h>

int main(void) {
	int n, k, i, a, max, ans;
	int classes[200001] = {0};

	max = 0;
	scanf("%d %d\n", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (max < (++classes[a])) {
			max = classes[a];
		}
	}

	ans = 0;
	for (i = 1; i <= k; i++) {
		if (classes[i] + 1 >= max) {
			++ans;
		}
	}
	printf("%d\n", ans);
	return 0;
}
