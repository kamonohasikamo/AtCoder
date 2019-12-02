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
float distance(int xi, int yi, int xj, int yj) {
	float dx = xi - xj;
	float dy = yi - yj;
	return pow(dx * dx + dy * dy, 0.5);
}

int main() {
	int n, i, j;
	cin >> n;
	int x[n], y[n];
	for (i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	float ans = 0;
	
	return 0;
}