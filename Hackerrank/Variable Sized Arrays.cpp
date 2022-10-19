#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<int> nvec[n];
    for (int i = 0; i < n; ++i) {
        cin >> size;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            nvec[i].push_back(value);
        }
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }
    return 0;
}
