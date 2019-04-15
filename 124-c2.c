#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char s[100000];
	scanf("%s", s);
	int i;
	int n = strlen(s);
	char t[n], u[n];
	int countA = 0, countB = 0;
	for (i = 0;i < n; i++) {
		if (i % 2 == 0) {
			t[i] = '1';
			u[i] = '0';
		} else {
			t[i] = '0';
			u[i] = '1';
		}
		if (s[i] != t[i]) {
			countA++;
		}
		if (s[i] != u[i]) {
			countB++;
		}
	}
	int ans = 0;
	printf("%d\n", ans = ( (countA >= countB) ? countB : countA));
	return 0;
}
