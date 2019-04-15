#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[5];
	int k,i;
	for (i=0; i<5;i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &k);

	for(i=0;i<4;i++) {
		if (abs(a[0] - a[i+1]) > k) {
			printf(":(\n");
			return 0;
		}
	}
	for(i=0;i<3;i++) {
		if (abs(a[1] - a[i+2]) > k) {
			printf(":(\n");
			return 0;
		}
	}
	for(i=0;i<2;i++) {
		if (abs(a[2] - a[i+3]) > k) {
			printf(":(\n");
			return 0;
		}
	}
	if (abs(a[3] - a[4]) > k) {
		printf(":(\n");
		return 0;
	}
	printf("Yay!\n");
	return 0;
}
