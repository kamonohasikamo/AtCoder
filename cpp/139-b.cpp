#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>

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
	int i, j;
	int a, b;
	cin >> a >> b;
	int ans = 0;
	int count = 1;
	roop(i, 100, 0) {
		if (count >= b) {
			break;
		}
		count--;
		count += a;
		ans++;
	}
	cout << ans << endl;
	return 0;
}
