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
	int n, i;
	cin >> n;
	vector<int> a(n);
	roop(i, n) {
		cin >> a[i];
	}
	int sum = accumulate(a.begin(), a.end(), 0);
	int average = round((double)sum / (double)n);
	int ans = 0;
	roop(i, n) {
		ans += myPower((a[i] - average), 2);
	}

	cout << ans << endl;
	return 0;
}