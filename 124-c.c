#include <stdio.h>

int main(void) {
	char s[100000];
	scanf("%s", s);
	int i;
	int count = 0;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == '0' && s[i+1] == '0') {
			s[i+1] = '1';
			count++;
		} else if (s[i] == '1' && s[i+1] == '1'){
			s[i+1] = '0';
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
