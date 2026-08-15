#include <stdio.h>
#define OFFSET (1000000000)

void upheap(int *pheap, int value) {
	int cur, tmp;
	pheap[++(*pheap)] = value;

	cur = *pheap;
	while (cur != 1) {
		if (pheap[cur] > pheap[cur/2]) {
			tmp = pheap[cur];
			pheap[cur] = pheap[cur/2];
			pheap[cur/2] = tmp;
		} else {
			break;
		}
		cur /= 2;
	}
}

int downheap(int *pheap) {
	int ret;
	int cur, tmp, child;
	if (*pheap == 0) {
		return -1;
	}

	ret = pheap[1];
	pheap[1] = pheap[(*pheap)--];
	cur = 1;
	while (cur * 2 < *pheap) {
		child = cur * 2;
		if (child + 1 < *pheap && pheap[child+1] > pheap[child]) {
			++child;
		}
		if (pheap[cur] < pheap[child]) {
			tmp = pheap[cur];
			pheap[cur] = pheap[child];
			pheap[child] = tmp;
		} else {
			break;
		}
		cur = child;
	}
	return ret;
}

int main(void) {
	int q, v;
	int type, t, w;
	int heap[30001] = {0};

	scanf("%d %d\n", &q, &v);
	for (int i = 0; i < q; i++) {
		scanf("%d", &type);
		if (type == 1) {
			scanf("%d %d\n", &t, &w);
			upheap(heap, w - t + OFFSET);
		} else {
			scanf("%d\n", &t);
			w = downheap(heap);
			if (w >= 0) {
				w = w + t - OFFSET;
				if (w > v) {
					w = v;
				}
			}
			printf("%d\n", w);
		}
	}
	return 0;
}
