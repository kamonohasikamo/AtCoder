#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>
#include <math.h>

#define roop(i,n,k) for(i=k;i<n;i++)

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
	int n;
	cin >> n;
	double ans = 0.0;
	if (n % 2 == 0) {
		ans = (1 / (double)n) * ((double)n / 2);
	} else {
		ans = ((1 / (double)n) * ceil((double)n / 2));
	}
	cout << ans << endl;
	return 0;
}
