#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
#include <string>
#include <sstream>
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
	int h, w;
	cin >> h >> w;
	if (h % 2 == 0) {
		cout << (h / 2) * w << endl;
	} else {
		if (w % 2 == 0) {
			cout << ((h / 2) * w) + (w / 2) << endl;
		} else {
			cout << ((h / 2) * w) + (w / 2) + 1<< endl;
		}
	}
	return 0;
}