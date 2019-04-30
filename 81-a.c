#include <stdio.h>

int main(void) {
	char s[3];
	scanf("%s", s);
	int i;
	int count = 0;
	for (i = 0; i < 3; i++) {
		if (s[i] == '1') count++;
	}
	printf("%d\n", count);
	return 0;
}
