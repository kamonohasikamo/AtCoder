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
	
int main() {
    ll a, b, k;
    cin >> a >> b >> k;
    if (a >= k) {
        cout << (a - k) << " " << b << endl;
    } else {
        if ( b - (k - a) >= 0) {
            cout << 0 << " " << b - (k - a) << endl;
        } else {
            cout << 0 << " " << 0 << endl;
        }
    }
	return 0;
}