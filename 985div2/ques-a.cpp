#include <iostream>
#include <vector>
using namespace std;

int maxOperations(int l, int r, int k){
    int result = 0;
    int temp;
    if (l == r){
        result = (k == 1 ? 1 : 0);
    } else {
        r = r - (r % k);
        temp = r / k;
        return max(0, temp - l + 1);
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    vector<int> results;

    for (int i = 0; i < t; i++) {
        int l, r, k;
        cin >> l >> r >> k;

        int result = maxOperations(l, r, k);
        results.push_back(result);
    }

    for (int res : results) {
        cout << res << endl;
    }

    return 0;
}