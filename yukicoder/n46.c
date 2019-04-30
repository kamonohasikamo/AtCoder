#include <stdio.h>

int main(void) {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	long long int ans = 0;
	if ((b % a) == 0) {
		ans = b / a;
	} else {
		ans = (b / a) + 1;
	}
	printf("%lld\n", ans);
	return 0;
}
