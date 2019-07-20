#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int i, j;
	int n;
	cin >> n;
	int min = 111;
	for (i = 2; i < 10; i++) {
		if (min < n) {
			min = 111 * i;
		}
	}
	cout << min << endl;
	return 0;
}