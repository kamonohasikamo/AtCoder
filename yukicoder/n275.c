#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int i, j;
	int a[n], tmp;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	if (n % 2 == 0) {
		printf("%f\n", (double)(a[n / 2] + a[(n / 2) - 1]) / 2);
		return 0;
	}
	printf("%d\n", a[n / 2]);
	return 0;
}
