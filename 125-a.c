#include <stdio.h>

int main(void) {
	int a, b, t;
	scanf("%d %d %d", &a, &b, &t);
	int i;
	int count = 0;
	int base = a;
	for (i = 1; i <= t; i++) {
		a = base * i;
		if (a <= t) {
			count++;
		} else {
			break;
		}
	}
	printf("%d\n", b * count);
	return 0;
}
