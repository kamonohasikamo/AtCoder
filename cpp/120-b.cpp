#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

#define roop(i,n) for(i=0;i<n;i++)

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
	int a, b, k, i;
	cin >> a >> b >> k;
	for (i = min(a, b); i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			--k;
			if (k == 0) {
				cout << i << endl;
				return 0;
			}
		}
	}
	return 0;
}