#include <stdio.h>

int main(void) {
	int x;
	scanf("%d", &x);
	int i;
	int ans = 0;
	for (i = 1;i <= x; i++) {
		ans += i;
	}
	printf("%d\n", ans);
	return 0;
}
