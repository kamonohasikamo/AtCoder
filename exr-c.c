#include <stdio.h>
//--------------------------------------------------------------
// checkMove
// 受け取った文字列と呪文の文字列と一致するものを探す。
// あった場合に、呪文の移動の判定を行う。
// 移動した先が一番端だった場合、
// 最も左ならば-1を、最も右ならば1を返す関数
// どちらでもなかった場合には0を返す
//--------------------------------------------------------------
int checkMove(char *s, char *t, char *d, int n, int q, int b) {
	int i;
	for (i = 0; i < q; ++i) {
		if (s[b] == t[i]) {
			b += ((d[i] == 'R') ? 1 : -1);
			if (b < 0) {
				return -1;
			}
			if (b > n - 1) {
				return 1;
			}
		}
	}
	return 0;
}

int main(void) {
	int n, q, i;
	scanf("%d %d", &n, &q);
	char s[n];
	scanf("%s", s);
	char t[q], d[q];
	for (i = 0; i < q; ++i) {
		scanf("\n %c %c", &t[i], &d[i]);
	}
	int a = 0, b_prev = -1, c = n - 1;
	int b;
	while(1) { // 左に行けるものの中で最も離れているものを探す => それまでのものはすべて消すことができる
		b = (a + c + 1) / 2;	// 二分探索の中央を求める
		if (b == b_prev) {		// 前回の探索と中央値が同じなら終わり
			break;
		}
		if (checkMove(s, t, d, n, q, b) < 0) {	// チェックして、行くことができるものがあるならaに、なければcに
			a = b;
		} else {
			c = b;
		}
		b_prev = b;
	}
	int left = a;

	a = 0;
	b_prev = -1;
	c = n - 1;
	while(1) { // 左の時と同様に最も右に行くことができるかどうかの判定
		b = (a + c + 1) / 2;
		if (b == b_prev) {
			break;
		}
		if (checkMove(s, t, d, n, q, b) > 0) {
			c = b;
		} else {
			a = b;
		}
		b_prev = b;
	}
	int right = a;

	printf("%d\n", right - left); // 右のものと左のものを引くと、残りが現れるので、それが残りのゴーレムの数
	return 0;
}
