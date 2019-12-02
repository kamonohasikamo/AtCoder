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
	double x;
	cin >> x;
	double check = x;
	check /= 1.08;
	int b = check;
	if (b > 1) {
		if ((int)(b * 1.08) == x) {
			cout << b << endl;
			return 0;
		}
		if ((int)((b - 1) * 1.08) == x) {
			cout << (b - 1) << endl;
			return 0;
		}
		if ((int)((b + 1) * 1.08) == x ) {
			cout << (b + 1) << endl;
			return 0;
		}
	}
	if ((int)(b * 1.08) == x) {
		cout << b << endl;
		return 0;
	}
	if ((int)((b + 1) * 1.08) == x) {
		cout << (b + 1) << endl;
		return 0;
	}
	cout << ":(" << endl;
	return 0;
}