#include <stdio.h>

int main(void) {
	int i;
	long long int n;
	long long int a[5];
	scanf("%lld", &n);
	for (i=0;i<5;i++) {
		scanf("%lld", &a[i]);
	}
	printf("n = %lld\n", n);
	for (i=0;i<5;i++) {
		printf("a[%d] = %lld\n", i, a[i]);
	}

	long long int ans = 0L;
	int count = 0;
	for (i=0;i<5;i++) {
		if (n < a[i]) {
			count++;
		}
	}
	if (count == 5) {
		printf("5\n");
		return 0;
	}
	if (n % a[0] != 0) {
		ans += n / a[0] + 6;
		printf("%lld\n", n / a[0]);
	} else {
		ans += n / a[0] + 5;
	}
	printf("%lld\n", ans);
	return 0;
}
