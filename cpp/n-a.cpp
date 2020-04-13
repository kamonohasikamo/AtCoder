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
// cin で、スペースが入ると勝手に区切ってしまう…
int main() {
	int n;
	cin >> n;
	cout << "n = " << n << endl;
	char s[n][10000];
	for (int i = 0; i <= n; i++) {
		cin >> s[i];
	}
	int start = 0;
	for (int i = 0; i < n; i++) {
		start = 0;
		for (int j = 0; s[i][j] != '\0'; j++) {
			if (s[i][j] == ' ') {
				for (int k = j-1; k > start; k--) {
					cout << s[i][k];
				}
				cout << " ";
				start = j + 1;
			}
		}
	}
	return 0;
}