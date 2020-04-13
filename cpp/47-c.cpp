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
	string s;
	cin >> s;
	int groupCount = 0;
	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] != s[i+1]) {
			groupCount++;
		}
	}
	cout << groupCount << endl;
	return 0;
}