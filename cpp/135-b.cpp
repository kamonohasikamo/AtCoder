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
	int n;
	cin >> n;
	int p[n];
	for (i = 0; i < n; i++) {
		cin >> p[i];
	}
	int count = 0;
	for (i = 0; i < n; i++) {
		if (p[i] != i + 1) {
			count++;
		}
	}
	if (count <= 2) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	return 0;
}