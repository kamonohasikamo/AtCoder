#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
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
	int a, b;
	cin >> a >> b;
	int k_2 = (a+b);
	if (k_2 % 2 == 0) {
		cout << k_2 / 2 << endl;
	} else {
		cout << "IMPOSSIBLE" << endl;
	}
	return 0;
}