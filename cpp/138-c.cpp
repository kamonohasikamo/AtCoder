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
	int n, i;
	cin >> n;
	vector<double> v(n);
	roop(i, n) {
		cin >> v.at(i);
	}

	sort(v.begin(), v.end());
	roop(i, n - 1) {
		v.at(i+1) = (v.at(i) + v.at(i + 1)) / 2;
	}

	cout << v.at(n - 1) << endl;
	return 0;
}
