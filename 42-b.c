#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int n, l, i, j, k;
	scanf("%d%d", &n, &l);
	char s[107][107];
	char tmp[107];
	scanf(" %s", s[0]);
	for (i = 1; i < n; i++) {
		scanf(" %s", s[i]);
		for (j = 0; j < i; j++) {
			if (strcmp(s[i], s[j]) < 0) {
				strcpy(tmp, s[i]);
				strcpy(s[i], s[j]);
				strcpy(s[j], tmp);
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%s", s[i]);
	}
	printf("\n");
	return 0;
}
