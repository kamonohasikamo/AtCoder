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
	int a, b, c;
	cin >> a >> b >> c;
	int count = 0;
	cout << "a != b = " << (a != b) << endl;
	cout << "b != c = " << (b != c) << endl;
	cout << "a != c = " << (a != c) << endl;
	if (a != b) {
		count++;
	}
	if (b != c) {
		count++;
	}
	if (a != c) {
		count++;
	}
	if ((a == b) && (b == c) && (a == c)) {
		count++;
	}
	cout << count << endl;
	return 0;
}