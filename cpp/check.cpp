#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	double s = 0.0;
	for (int i = 0; i <= 10; i = i + 1) {
		s = s + i;
	}
	s = s / 10;
	cout << s;
}