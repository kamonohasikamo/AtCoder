#include <stdio.h>

int check5(int k) {
	if (k == 5) {
		return 1;
	} else {
		return 0;
	}
}

int check7(int k) {
	if (k == 7) {
		return 1;
	} else {
		return 0;
	}
}

int main (void) {
	int a[3], i;
	scanf("%d%d%d", &a[0], &a[1], &a[2]);

	int count5 = 0, count7 = 0;
	for (i = 0; i < 3; i++) {
		if (check5(a[i]) == 1) {
			count5++;
		}
		if (check7(a[i]) == 1) {
			count7++;
		}
	}
	if (count5 == 2 && count7 == 1) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}
