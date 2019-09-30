#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>

#define roop(i,n) for(i=0;i<n;i++)

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
	char s[3], t[3];
	cin >> s;
	cin >> t;
	int count = 0;
	roop(i, 3) {
		if (s[i] == t[i]) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
