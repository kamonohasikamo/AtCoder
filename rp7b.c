#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int min(int a, int b, int c) {
	int min = a;
	if (min > b) {
		min = b;
	}
	if (min > c) {
		min = c;
	}
	return min;
}

//===============================================================================
// 動的計画法　文字列の比較プログラム(AD2rp7)
//===============================================================================
int main(void) {
	char inputText_A[40];
	char inputText_B[40];
	printf("text1: ");
	scanf("%s", inputText_A);
	printf("text2: ");
	scanf("%s", inputText_B);
	int i, j;
	// for (i = 0; inputText_A[i] != '\0'; i++) {
	// 	printf("inputText_A[%d] = %c\n", i, inputText_A[i]);
	// }
	// printf("======================================\n");
	// for (i = 0; inputText_B[i] != '\0'; i++) {
	// 	printf("inputText_B[%d] = %c\n", i, inputText_B[i]);
	// }
	int inputTextLenght_A = strlen(inputText_A);
	int inputTextLenght_B = strlen(inputText_B);
	int map[inputTextLenght_B][inputTextLenght_A];

	//MAPの作成　同じならコスト0、そうでなければコスト5とする。
	for (i = 0; i < inputTextLenght_B; i++) {
		for (j = 0; j < inputTextLenght_A; j++) {
			if (inputText_A[j] == inputText_B[i]) {
				map[i][j] = 0;
			} else {
				map[i][j] = 5;
			}
		}
	}

	printf("\n******************MapData********************\n  |");
	for (i = 0; i < inputTextLenght_A; i++) {
		printf("%c |", inputText_A[i]);
	}
	printf("\n----------------------------------------------\n");
	for (i = 0; i < inputTextLenght_B; i++) {
		printf("%c |", inputText_B[i]);
		for (j = 0; j < inputTextLenght_A; j++) {
			printf("%d |", map[i][j]);
		}
		printf("\n");
	}

	int dp[inputTextLenght_B][inputTextLenght_A];
	dp[0][0] = map[0][0];
	printf("\n****************DPMap********************\n");
	for (i = 0; i < inputTextLenght_B; i++) {
		printf("  |");
		for (j = 0; j < inputTextLenght_A; j++) {
			dp[i][j] = min(map[i][j + 1] + 1, map[i + 1][j] + 1, map[i + 1][j + 1]);
			printf("%d |", dp[i][j]);
		}
		printf("\n");
	}
	printf("i = %d, j = %d, distance = %d\n", inputTextLenght_B - 1, inputTextLenght_A - 1, dp[inputTextLenght_B - 1][inputTextLenght_A - 1]);
	return 0;
}
