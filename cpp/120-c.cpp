#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>
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
	char s[100001];
	int i;
	cin >> s;
	if (strlen(s) == 1) {
		cout << 0 << endl;
		return 0;
	}
	int zeroCount = 0;
	int oneCount = 0;
	roop(i, strlen(s)) {
		if (s[i] == '0') {
			zeroCount++;
		} else {
			oneCount++;
		}
	}
	cout << 2 * min(zeroCount, oneCount) << endl;
	return 0;
}