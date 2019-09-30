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
	char s[10];
	cin >> s;
	if (s[0] == 'S') {
		cout << "Cloudy";
	} else if (s[0] == 'C') {
		cout << "Rainy";
	} else {
		cout << "Sunny";
	}
	return 0;
}
