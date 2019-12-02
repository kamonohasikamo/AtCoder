#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
#include <string>
#include <cstring>

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

int main() {
	int x,i;
	cin >> x;
	//=======================================
	// 解法1　品物の個数を決め打ち
	// 入力値(合計金額)：x円
	// 品物の個数は
	// 入力値を100で割ったときの整数部分個だけである。
	// (例)　615円　→　6個のもので構成されているはず。
	// なぜなら、100円～105円のもので購入していくので
	// 615円のものを作るにはどれかを6個買わないと作れない.
	// この品物の個数をC個とする。
	// すると、C = (x / 100)と表すことができる
	// このCを100倍した値～105倍した値の中に
	// 入力値x円があれば1を
	// なければ0を出力すれば今回の答えとなる。
	// 例：x = 615円
	// C=>6個
	// C*100 => 600
	// C*105 => 630
	// 600 <= x(=615) <= 630なので、1
	// 例：x = 217円
	// c=>2個
	// c*100 => 200
	// c*105 => 210
	// 200 <= 210 <= x(=217)なので、0
	//=======================================
	int itemCount = x / 100;
	if (itemCount*100 <= x && x <= itemCount*105) {
		cout << "1" << endl;
	} else {
		cout << "0" << endl;
	}
	return 0;
}