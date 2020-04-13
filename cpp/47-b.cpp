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

ull fun(ull n) {
	if (n < 2) {
		return 1;
	} else {
		return n * fun(n - 2);
	}
}

int main() {
	int w, h, n;
	cin >> w >> h >> n;
	vector<int> x(n), y(n), a(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i] >> a[i];
	}
	vector<vector<int>> ans(w, vector<int>(h));
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			ans[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		switch(a[i]) {
			case 1:
				for (int j = 0; j < h; j++) {
					for (int k = 0; k < x[i]; k++) {
						ans[k][j] = 1;
					}
				}
				break;
			case 2:
				for (int j = 0; j < h; j++) {
					for (int k = x[i]; k < w; k++) {
						ans[k][j] = 1;
					}
				}
				break;
			case 3:
				for (int j = 0; j < w; j++) {
					for (int k = 0; k < y[i]; k++) {
						ans[j][k] = 1;
					}
				}
				break;
			case 4:
				for (int j = 0; j < w; j++) {
					for (int k = y[i]; k < h; k++) {
						ans[j][k] = 1;
					}
				}
				break;
		}
	}

	int count = 0;
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			if (ans[i][j] == 0) {
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}