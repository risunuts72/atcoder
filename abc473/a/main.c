#include <stdio.h>

int main(void) {
	int n, i, buf, sum;

	scanf("%d\n", &n);
	i = 0;
	while (i < n) {
		scanf("%d", &buf);
		i += 2;
	}

	i = 0;
	sum = 0;
	while (i < n) {
		scanf("%d", &buf);
		sum += buf;
		i += 2;
	}
	printf("%d\n", sum);
	return 0;
}
