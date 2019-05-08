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
void showint(int i);
void showllint(long long i);
void showdint(double i);
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

int main(void) {
	int i;
	int count = 0;
	int smCount = 0;
	char s[10];
	scanf("%s", s);
	if (s[0] == 'A') {
		ROOP(i, strlen(s)) {
			if (2 <= i && i <= strlen(s) - 2) {
				if (s[i] == 'C') {
					count++;
				}
			}
			if ( (s[i]>= 'a') && (s[i]<='z') ) {
				smCount++;
			}
		}
		if (count == 1 && smCount == strlen(s) - 2) {
			showstring("AC");
			return 0;
		}
	}
	showstring("WA");
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

void showdint(double i) {
	printf("%lf\n", i);
}

void showchar(char c) {
	printf("%c\n", c);
}

void showstring(char *s) {
	printf("%s\n", s);
}
