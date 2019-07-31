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
	int n, i, j;
	cin >> n;
	int a[n];
	roop(i, n) {
		cin >> a[i];
	}
	int max = 1, second = 0;
	int maxIndex = 0, secondIndex = 1;
	roop(i, n) {
		if (max < a[i]) {
			second = max;
			max = a[i];
			secondIndex = maxIndex;
			maxIndex = i;
		} else if (second < a[i]) {
			second = a[i];
			secondIndex = i;
		}
	}
	roop(i, n) {
		if (maxIndex != i) {
			cout << max << endl;
		} else {
			cout << second << endl;
		}
	}

	return 0;
}