#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
using namespace std;
	
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

int main() {
	int i, j;
	long long int n;
	cin >> n;
	long long int a[n+1];
	long long int b[n];
	for (i = 0; i < n+1; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n; i++) {
		cin >> b[i];
	}
	long long int ans = 0;
	for (i = 0; i < n; i++) {
		if (b[i] > a[i]) {
			b[i] -= a[i];
			ans += a[i];
			a[i] = 0;
			if ((b[i] > (long long)0) && (a[i+1] - b[i] > (long long)0)) {
				a[i+1] -= b[i];
				ans += b[i];
			} else if ((b[i] > (long long)0) && (a[i+1] - b[i] <= (long long)0)) {
				ans += a[i+1];
				a[i+1] = 0; 
			}
		} else {
			a[i] -= b[i];
			ans += b[i];
		}
	}
	
	cout << ans << endl;
	return 0;
}