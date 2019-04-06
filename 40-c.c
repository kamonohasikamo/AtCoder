#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//=============================================
// DPで解く。
// DPとは、漸化式のようなもの。
// 1つ前が決まっている前提で、次の項を決める
//=============================================
int main(void) {
	int n, i;
	scanf("%d", &n);
	int a[n];
	for (i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	if (n == 2) {
		printf("%d\n", abs(a[0] - a[1]));
		return 0;
	}
	int dp[n];
	dp[0] = 0;
	dp[1] = abs(a[0] - a[1]);
	int l,m;
	for (i=1;i<n;i++) {
		l = dp[i] + abs(a[i+1] - a[i]);
		m = dp[i-1] + abs(a[i+1] - a[i-1]);
		dp[i+1] = fmin(l, m);
	}
	printf("%d\n", dp[n-1]);
	return 0;
}
