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
	char s[101];
	int i;
	cin >> s;
	int flag = 0;
	for (i = 0; s[i] != '\0'; i++) {
		if (i % 2 != 0) {
			if (s[i] != 'L'
			 && s[i] != 'U'
			 && s[i] != 'D') {
				flag = 1;
			}
		} else {
			if (s[i] != 'R'
			 && s[i] != 'U'
			 && s[i] != 'D') {
				flag = 1;
			}
		}
	}
	if (flag == 0) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	return 0;
}
