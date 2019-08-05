#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
#include <string>
#include <cstring>

#define roop(i, n) for(int i=0;i<n;i++)

using namespace std;
using ll = long long;
using ull = unsigned long long;

constexpr ull mod = 1e9+7;
constexpr int N = 13;
ull dp[100010][N];

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
	int h[n];
	roop(i, n) {
		cin >> h[i];
	}
	if (n == 1) {
		cout << "Yes" << endl;
		return 0;
	} else if (n == 2) {
		if (h[0] < h[1] || h[0] == h[1]) {
			cout << "Yes" << endl;
		} else if ((h[0] - h[1]) == 1) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	for (i = n - 2; i > -1; i--) {
		if (h[i] < h[i + 1] || h[i] == h[i + 1]) {

		} else if ((h[i] - h[i + 1]) == 1) {
			h[i]--;
		} else {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}