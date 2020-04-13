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
#include <limits>
#include <numeric>
#include <type_traits>

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

int myGCD(int a, int b) {
	while(1) {
		if (a < b) swap(a, b);
		if (!b) break;
		a %= b;
	}
	return a;
}

int main() {
	int a, b, c, k;
	cin >> k;
	ll sum = 0;
	for (a = 1; a <= k; a++) {
		for (b = 1; b <= k; b++) {
			for (c = 1; c <= k; c++) {
				sum += myGCD(a, myGCD(b, c));
			}
		}
	}
	cout << sum << endl;
	return 0;
}