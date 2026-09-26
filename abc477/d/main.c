#include <stdio.h>
#define TILE (0x20)

int main(void) {
	char squares[300002] = {0,};
	int n, q, i, qt, qx, j;
	char qc;
	scanf("%d %d\n", &n, &q);
	for (i = 1; i <= n; i++) {
		squares[i] = 'a';
	}
	for (i = 0; i < q; i++) {
		scanf("%d ", &qt);
		if (qt == 1) {
			scanf("%d\n", &qx);
			squares[qx] ^= TILE;
		} else {
			do {
				qc = getchar();
			} while (!(qc & TILE));
			for (j = 1; j <= n; j++) {
				if (squares[j] & TILE) {
					squares[j] = qc;
				}
			}
		}
	}
	for (i = 1; i <= n; i++) {
		squares[i] |= TILE;
	}
	puts(squares+1);
	return 0;
}
