#include <stdio.h>
long long int gcd(long long int a, long long int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a%b);
}

int main(void) {
	int n;
	scanf("%d", &n);
	long long int a[n];
	int i;
	long long int element = 0;
	for (i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	if (n == 1) {
		printf("%lld\n", a[0]);
	} else {
		element = gcd(a[0], a[1]);
		if (n == 2) {
			printf("%lld\n", element);
		} else {
			for (i = 2; i < n; i++) {
				element = gcd(element, a[i]);
			}
		}
	}
	int count = 0;
	while (1) {
		if (element % 2 == 0 && element > 0) {
			element /= 2;
			count++;
		} else {
			break;
		}
	}
	printf("%d\n", count);
	return 0;
}
