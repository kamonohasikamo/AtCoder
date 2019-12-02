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
	ll x;
	cin >> x;
	//=======================================
	// 解法2　動的計画法
	// dp[i] を 「i円の買い物ができる->1」、「できない=>0」とする
	// dp[0] は 「0円の買い物ができる」なので1.
	// *　のif文の条件式について
	// 0から入力値xまでを見ていく。
	// ある時点のj番目の自分がtrueの場合、
	// j+100～j+105を足した自分も当然trueになっているはず
	// なぜなら、jの時点で変えるんだから、
	// どの商品を1つ足しても変えるはずという前提条件がある
	// ある時点(j番目)の自分がtrueであり、
	// j+100～j+105の値がxを超えていないならば、
	// その未来の自分(j+100～j+105)の自分をtrueとする作業を行う
	// こうすることで、dpテーブルを作成し、
	// x番目の自分がtrueなのか、falseなのかで
	// 今回の問題は解ける
	//=======================================
	vector<int> tb = {100, 101, 102, 103, 104, 105};
	vector<int> dp(x+1, false);

	dp[0] = true;
	for (int i = 0; i < tb.size(); i++) {
		for (int j = 0; j < x + 1; j++) {
			if (dp[j] && j + tb[i] <= x) { // *
				dp[j + tb[i]] = true;
			}
		}
	}
	if(dp[x]){
		cout << 1 << endl;
	}else{
		cout << 0 << endl;
	}
	return 0;
}