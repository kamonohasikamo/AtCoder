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
	int n, T, i, j;
	cin >> n >> T;
	int c[n];
	int t[n];
	roop(i, n) {
		cin >> c[i] >> t[i];
	}
	int min = 1001;
	roop(i, n) {
		if (t[i] <= T) {
			if (c[i] < min) {
				min = c[i];
			}
		}
	}
	if (min == 1001) {
		cout << "TLE" << endl;
	} else {
		cout << min << endl;
	}
	return 0;
}