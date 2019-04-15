#include <stdio.h>

int main(void) {
	int a[5];
	int i;
	for (i=0;i<5;i++) {
		scanf("%d", &a[i]);
	}
	int max = 0;
	int k = 0;
	for (i=0;i<5;i++) {
		if (a[i] % 10 != 0) {
			if (max < (10 - (a[i] % 10))) {
				max = (10 - (a[i] % 10));
				k = i;
			}
		}
	}
	for (i=0;i<5;i++) {
		if (a[i] % 10 != 0) {
			if (i != k) {
				a[i] += (10 - (a[i] % 10));
			}
		}
	}
	int ans=0;
	for (i=0;i<5;i++) {
		ans += a[i];
	}
	printf("%d\n", ans);
	return 0;
}
