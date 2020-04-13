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
	int n, i, j, k;
	string s;
	cin >> n >> s;
	ll r = 0, g = 0, b = 0;
	for (i = 0; i < n; i++) {
		if (s[i] == 'R') r++;
		if (s[i] == 'G') g++;
		if (s[i] == 'B') b++;
	}

	ll total = r * g * b;
	ll sub = 0;
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (s[i] == s[j]) continue;
			int k = j + (j - i); // -> (2 * j) - i
			if (k >= n || s[k] == s[i] || s[k] == s[j]) continue;
			sub++;
		}
	}
	cout << (total - sub) << endl;
	return 0;
}