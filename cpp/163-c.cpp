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
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> ans(n);
	for (int i = 0; i < n; i++) {
		ans[i] = 0;
	}
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i];
		ans[a[i]]++;
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}