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
	int a;
	char s[10];
	cin >> a >> s;
	if (a >= 3200) {
		cout << s << endl;
	} else {
		cout << "red" << endl;
	}
	return 0;
}
