#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

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
	int i, j;
	int n, d, k;
	cin >> n >> d;
	int x[n][d];
	for (i = 0; i < n; i++) {
		for (j = 0; j < d; j++) {
			cin >> x[i][j];
		}
	}
	int ans = 0;
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			int norm = 0;
			for (k = 0; k < d; k++) {
				int diff = abs(x[i][k] - x[j][k]);
				norm += myPower(diff, 2);
			}

			int flag = 0;
			for (k = 0; k <= norm; k++) {
				if (myPower(k, 2) == norm) {
					flag = 1;
				}
			}
			if (flag == 1) {
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}