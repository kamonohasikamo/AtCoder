#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int v[n];
	int i;
	for (i = 0; i < n;i++) {
		scanf("%d", &v[i]);
	}
	int c[n];
	for (i = 0; i < n;i++) {
		scanf("%d", &c[i]);
	}

	int ans = 0;
	for (i = 0; i < n; i++) {
		if (v[i] - c[i] > 0) {
			ans += (v[i] - c[i]);
		}
	}

	printf("%d\n", ans);
	return 0;
}
