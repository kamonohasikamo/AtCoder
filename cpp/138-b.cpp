#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>

#define roop(i,n) for(i=0;i<n;i++)

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
	int n, i, j;
	cin >> n;
	int a[n];
	double ansReciprocal = 0, ans = 0;
	roop(i, n) {
		cin >> a[i];
		ansReciprocal += (1 / (double)a[i]);
	}
	ans = 1 / ansReciprocal;
	cout << ans << endl;
	return 0;
}
