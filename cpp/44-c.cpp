#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <numeric>

#define roop(i, n) for(int i=0;i<n;i++)

using namespace std;
using ll = long long int;
using ull = unsigned long long;

constexpr ull mod = 1e9+7;
constexpr int N = 13;
ull dp[100010][N];

float myPower(int a, int n) { // aのn乗の計算
	float x = 1;
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
	ll n, a, i;
	cin >> n >> a;
	vector<ll> x(n+1);
	roop(i, n) {
		cin >> x[i+1];
	}
	vector<vector<vector<ll>>> dp(n + 1, vector<vector<ll>>(n + 1, vector<ll>(n * n)));
	roop(i, n + 1) {
		dp[i][0][0] = 1;
	}
	ll j, k, s;
	for (j = 1; j <= n; j++) {
		for (k = 1; k <= n; k++) {
			for (s = 1; s <= 2500; s++) {
				dp[j][k][s] += dp[j-1][k][s];
				if(s>=x[j]) {
					dp[j][k][s] += dp[j-1][k-1][s-x[i]];
				}
			}
		}
	}
	ll ans = 0;
	roop(i, n) {
		ans += dp[n][i][i * a];
	}
	cout << ans << endl;
	return 0;
}