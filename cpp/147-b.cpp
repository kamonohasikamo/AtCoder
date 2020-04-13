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
	string s;
	cin >> s;
	int i = 0, j = s.size() - 1, ans=0;
	if (s.size() == 1) {
		cout << 0 << endl;
		return 0;
	}
	if (s.size() % 2 == 0) {
		while(true) {
			if (s[i] != s[j]) {
					ans++;
			}
			i++;
			j--;
			if (j < (s.size() / 2)) {
				break;
			}
		}
	} else {
		while(true) {
			if (s[i] != s[j]) {
					ans++;
			}
			i++;
			j--;
			if ((j < (s.size() / 2) + 1)) {
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}