#include <stdio.h>
#include <limits.h>

int main(void) {
	int n, d;
	int x[100] = {0};
	int min_dist[100];
	int i, j, dist, k;
	scanf("%d %d", &n, &d);

	for (i = 0; i < n; i++) {
		scanf("%d", &(x[i]));
	}
	k = n;
	for (i = 0; i < n; i++) {
		min_dist[i] = INT_MAX;
		for (j = 0; j < i; j++) {
			if (x[i] < x[j]) {
				dist = x[j] - x[i];
			} else {
				dist = x[i] - x[j];
			}
			if (dist < min_dist[i]) {
				if (min_dist[i] >= d && dist < d) {
					--k;
				}
				min_dist[i] = dist;
			}
			if (dist < min_dist[j]) {
				if (min_dist[j] >= d && dist < d) {
					--k;
				}
				min_dist[j] = dist;
			}
		}
	}

	printf("%d\n", k);
	j = 0;
	for (i = 0; i < n; i++) {
		if (min_dist[i] >= d) {
			if (j++) {
				putchar(' ');
			}
			printf("%d", i + 1);
		}
	}
	putchar('\n');
	return 0;
}
