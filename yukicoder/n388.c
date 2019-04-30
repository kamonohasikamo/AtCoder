#include <stdio.h>

int main(void) {
	int s, f;
	scanf("%d %d", &s, &f);
	int ans = 0;
	ans = (s / f) + 1;
	printf("%d\n", ans);
	return 0;
}
