#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int i, j;
	int n, a, b;
	cin >> n >> a >> b;
	if (b > a * n) {
		cout << a * n << endl;
	} else {
		cout << b << endl;
	}
	
	return 0;
}