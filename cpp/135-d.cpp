#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
using ll = long long;
using ull = unsigned long long;
#define roop(i, n) for(int i=0; i < n; i++)

constexpr ull mod = 1e9+7;
constexpr int N = 13;
ull dp[100010][N];

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

//============================================================================
// 解法
// 漸化式：
// dp[i][j] = 先頭i文字目として考えられるもののうち、13で割った余りがjのもの
// 
// iの昇順にdpを見ると、i-1文字目までを13で割ったあまり(dp[i-1][j]のj)と
// s[i]としてあり得る数字をすべて試すことでdp[i][0] ~ dp[i][12]の値がわかる
// 13で割った余りが5となるものを出力すればよい。(dp[n][5]が答え)
//============================================================================

int main() {
	int i, j, k;
	string s;
	cin >> s;

	int n = s.length();
	dp[0][0]=1;

	roop(i, n) {
		if(s[i]=='?'){
			roop(k, 10){
				roop(j, N) {
					dp[i + 1][(10*j+k) % N] += dp[i][j];
					dp[i + 1][(10*j+k) % N] %= mod;
				}
			}
		} else {
			int k = s[i]-'0';
			roop(j, N) {
				dp[i + 1][(10*j+k) % N] += dp[i][j];
				dp[i + 1][(10*j+k) % N] %= mod;
			}
		}
	}
	ull ans = dp[n][5]%mod;
	cout << ans << endl;
	return 0;
}