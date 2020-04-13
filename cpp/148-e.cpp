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
	long long n;
	cin >> n;

	if(n % 2 == 1) {
		cout << 0 << endl;
	} else {
		long long ans = 0LL;
		for(int i = 1; i < 26; ++i){
			ans += n / ((long long)pow(5, i)*2);
		}
		cout << ans << endl;
	}
	return 0;
}