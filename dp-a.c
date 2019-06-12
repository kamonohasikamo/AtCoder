#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

#define ROOP(i,n) for(i=0;i<n;i++)

//prototype declaration
int getint();
long long getllint();
double getdint();
char getch();
void setstring(char *s);
void showint(int i);
void showllint(long long i);
void showdouble(double i);
void showchar(char c);
void showstring(char *s);

int myPower(int a, int n) { // aのn乗の計算
	int x = 1;
	while (n > 0) { // 全てのbitが捨てられるまで
		if ( n & 1) { // 一番右のbitが１のとき
			x *= a;
		}
		a *= a;
		n >>= 1; // bit全体を右に1つシフトして一番右を捨てる
	}
	return x;
}

int min(int a, int b) {
	return a < b ? a : b;
}

int main(void) {
	int n, i, j;
	n = getint();
	int h[n];
	ROOP(i, n) {
		h[i] = getint();
	}
	int dp[n];
	dp[0] = 0;
	dp[1] = abs(h[0] - h[1]);
	for(i = 2; i < n; i++) {
		dp[i] = min(dp[i-1] + abs(h[i-1] - h[i]), dp[i-2] + abs(h[i-2] - h[i]));
	}
	printf("%d\n", dp[n-1]);
	return 0;
}

int getint() {
	int i;
	scanf("%d", &i);
	return i;
}

long long getllint() {
	long long i;
	scanf("%lld", &i);
	return i;
}

double getdint() {
	double i;
	scanf("%lf", &i);
	return i;
}

char getch() {
	char c;
	scanf("%c", &c);
	return c;
}

void setstring(char *s) {
	scanf("%s", s);
}

void showint(int i) {
	printf("%d\n", i);
}

void showllint(long long i) {
	printf("%lld\n", i);
}

void showdouble(double i) {
	printf("%lf\n", i);
}

void showchar(char c) {
	printf("%c\n", c);
}

void showstring(char *s) {
	printf("%s\n", s);
}
