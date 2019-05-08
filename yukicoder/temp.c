#include <stdio.h>
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
void intpr(int i);
void prllint(long long i);
void prdint(double i);
void prchar(char c);
void prstring(char *s);
int dfs(int v, int n, int *visited, int table[n][n]);
int gcd(int a, int b);
int lcm(int a, int b);
long long llgcd(long long a, long long b);
long long lllcm(long long a, long long b);

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

int main(void) {
	int i, n, k, ans = 0;
	n = getint();
	k = getint();
	int max = myPower(2, n);
	int check = myPower(2, k);
	if (max < check) {
		intpr(0);
		return 0;
	}
	ROOP(i, max) {
		if (i % check == 0) {
			ans++;
		}
	}
	intpr(ans);
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

void intpr(int i) {
	printf("%d\n", i);
}

void prllint(long long i) {
	printf("%lld\n", i);
}

void prdint(double i) {
	printf("%lf\n", i);
}

void prchar(char c) {
	printf("%c\n", c);
}

void prstring(char *s) {
	printf("%s\n", s);
}

int dfs(int v, int n, int *visited, int table[n][n]) {
	int all_visited = 1, i;

	ROOP(i,n) {
		if (!visited[i]) {
			all_visited = 0;
			break;
		}
	}

	if (all_visited) {
		return 1;
	}

	int count = 0;

	ROOP(i,n) {
		if (!table[v][i]) continue;
		if (visited[i]) continue;

		visited[i] = 1;
		count += dfs(i, n, visited, table);
		visited[i] = 0;
	}

	return count;
}

int gcd(int a, int b) {
	int r;

	if (a < b) {
		r = a;
		a = b;
		b = r;
	}

	r = a % b;
	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}

	return b;
}

int lcm(int a, int b) {
	int r = llgcd(a, b);
	a /= r;
	return a * b;
}

long long llgcd(long long a, long long b) {
	long long r;

	if (a < b) {
		r = a;
		a = b;
		b = r;
	}

	r = a % b;
	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}

	return b;
}

long long lllcm(long long a, long long b) {
	long long r = llgcd(a, b);
	a /= r;
	return a * b;
}
