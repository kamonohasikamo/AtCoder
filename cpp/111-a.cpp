#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
		int i, j, n;
		cin >> n;
		int ans[3];
		for (i = 0; i < 3; i++) {
			ans[i] = n % 10;
			n /= 10;
			if (ans[i] == 1) {
				ans[i] = 9;
			} else {
				ans[i] = 1;
			}
		}
		cout << ans[2] << ans[1] << ans[0] <<endl;
		return 0;
}