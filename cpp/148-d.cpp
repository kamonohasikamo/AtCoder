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

int main() {
	int n, k;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int tmp = -1;
	for (int j = 0; j < n; j++) {
		if (a[j] == 1) {
			tmp = j;
			break;
		}
	}
	if (tmp == -1) {
		cout << -1 << endl;
		return -1;
	}
	vector<int> b;
	b.push_back(1);
	k = 2;
	for (int i = tmp; a[i] != '\0'; i++) {
		if (a[i] == k) {
			b.push_back(k);
			k++;
		}
	}
	cout << (n - b.size()) << endl;
	return 0;
}