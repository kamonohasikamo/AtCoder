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

constexpr ull mod = 1e9+7;
constexpr int N = 13;
ull dp[100010][N];

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

struct inputString {
	string input;
	int soeji;
};

int main() {
	struct inputString s[3];
	cin >> s[0].input >> s[1].input >> s[2].input;
	int length = s[0].input.length + s[1].input.length + s[2].input.length; 
	for (int i = 0; i < 3; i++) {
		s[i].soeji = 0;
	}
	s[0].soeji = 1;
	for (int i = 0; i < length; i++) {
		
	}
	return 0;
}