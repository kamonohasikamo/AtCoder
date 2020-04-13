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
	ll n;
	cin >> n;
	ll sum = 0;
	for (ll i = 1; i <= n; i++) {
		if (i % 15 == 0) {
			continue;
		} else if (i % 3 == 0) {
			continue;
		} else if (i % 5 == 0) {
			continue;
		} else {
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}