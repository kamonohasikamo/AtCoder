#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	char s[n];
	scanf("%s", s);
	int i;
	int red = 0, blue = 0;
	for (i = 0; i < n; i++) {
		if (s[i] == 'R') {
			red++;
		} else {
			blue++;
		}
	}
	if (red > blue) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0;
}
