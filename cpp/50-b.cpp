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
#define DIV 1000000007

using namespace std;
using ll = long long int;
using ull = unsigned long long;

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

ll combination(ll n, ll r) {
	if (n < 0 || r < 0 || r > n) return -1;

	if (n - r < r) r = n - r;
	if (r == 0) return 1;
	if (r == 1) return n;

	vector<ll> num(r);
	vector<ll> den(r);

	for (ll i = 0; i < r; i++) {
		num[i] = n - r + i + 1;
		den[i] = i + 1;
	}

	for (ll p = 2; p <= r; p++) {
		ll pivot = den[p - 1];
		if (pivot > 1) {
			ll offset = (n - r) % p;
			for (ll k = p - 1; k < r; k += p) {
				num[k - offset] /= pivot;
				den[k] /= pivot;
			}
		}
	}
	ll result = 1;
	for (ll k = 0; k < r; k++) {
		if (num[k] > 1) result *= num[k];
	}
	return result;
}

struct inputData {
	int p;
	int x;
};

int main() {
	int n, i, j, m;
	cin >> n;
	vector<int> t(n+1);
	for (i = 1; i <= n; i++) {
		cin >> t[i];
	}
	cin >> m;
	vector<inputData> q(m+1);
	for (i = 1; i <= m; i++) {
		cin >> q[i].p >> q[i].x;
	}

	for (i = 1; i <= m; i++) {
		int ans = 0;
		for (j = 1; j <= n; j++) {
			if (q[i].p == j) {
				ans += q[i].x;
			} else {
				ans += t[j];
			}
		}
		cout << ans << endl;
	}

	return 0;
}