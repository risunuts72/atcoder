#include <stdio.h>
#include <string.h>

void eraseLineSeparator(char *str) {
	while (*str) {
		if (*str == '\n' || *str == '\r') {
			*str = 0;
			break;
		}
		++str;
	}
}

int startsWith(char *str, char *substr) {
	while (*substr) {
		if (*str != *substr) {
			return 0;
		}
		++str;
		++substr;
	}
	return 1;
}

int main(void) {
	int q, l, r, i, j, slen, tlen;
	char s[400003] = {0,};
	char t[13] = {0,};

	scanf("%d\n", &q);
	fgets(s, sizeof(s), stdin);
	fgets(t, sizeof(t), stdin);
	eraseLineSeparator(s);
	eraseLineSeparator(t);
	slen = strlen(s);
	tlen = strlen(t);
	for (i = 0; i <= slen - tlen; i++) {
		if (startsWith(&(s[i]), t)) {
			s[i] = '@';
		}
	}

	for (i = 0; i < q; i++) {
		scanf("%d %d", &l, &r);
		for (j = l - 1; j <= r - tlen; j++) {
			if (s[j] == '@') {
				puts("Yes");
				break;
			}
		}
		if (j > r - tlen) {
			puts("No");
		}
	}
	return 0;
}
