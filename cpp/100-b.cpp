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
	int d, n;
	cin >> d >> n;
	switch(d) {
		case 0:
			if (n == 100) {
				cout << "101" << endl;
			} else {
				cout << n << endl;
			}
			break;
		case 1:
			if (n == 100) {
				cout << "10100" << endl;
			} else {
				cout << (pow(100, d) * n) << endl;
			}
			break;
		case 2:
			if (n == 100) {
				cout << "1010000" << endl;
			} else {
				cout << (pow(100, d) * n) << endl;
			}
			break;
	}
	return 0;
}