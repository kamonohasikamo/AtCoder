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
	
#define roop(i, start, end) for(int i=start;i<end;i++)
	
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

bool isPrime(int x) { // 素数判定
	if (x <= 1) return false;
	for (int i = 2; i*i <= x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n, k, r, s, p;
	cin >> n >> k;
	cin >> r >> s >> p;
	string t;
	cin >> t;
	int ans = 0;
	vector<bool> table(n);
	for (int i = 0; i < t.length(); i++) {
		if (i >= k) {
			if (t[i - k] == t[i]) {
				if (table[i - k] == true) continue;
			}
		}
		if (t[i] == 'r') {
			ans += p;
		} else if (t[i] == 'p') {
			ans += s;
		} else {
			ans += r;
		}
		table[i] = true;
	}
	cout << ans << endl;
	return 0;
}