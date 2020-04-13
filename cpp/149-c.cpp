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
    ll a;
    cin >> a;
    ll r = a;
    while(!isPrime(r)) {
        r++;
    }
    cout << r << endl;
	return 0;
}