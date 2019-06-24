#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n, m, x, y, i, j;
    cin >> n >> m >> x >> y;
    int dataX[n];
    int dataY[m];
    for (i = 0; i < n; i++) {
        cin >> dataX[i];
    }
    for (i = 0; i < m; i++) {
        cin >> dataY[i];
    }
    int checkFlag = 0;
    for (j = x + 1; j <= y; j++) {
        for (i = 0; i < n; i++) {
            if (dataX[i] < j) {
                checkFlag++;
                // cout << "dataX[" << i << "] = " << dataX[i] << endl;
                // cout << "j = " << j << endl;
            }
        }
        for (i = 0; i < m; i++) {
            if (dataY[i] >= j) {
                checkFlag++;
                // cout << "dataY[" << i << "] = " << dataY[i] << endl;
                // cout << "j = " << j << endl;
            }
        }
        //cout << "checkFlag = " << checkFlag << endl;
        if (checkFlag == (n + m)) {
            cout << "No War" << endl;
            return 0;
        }
        checkFlag = 0;
    }
    cout << "War" << endl;    
    return 0;
}