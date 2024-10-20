#include <iostream>
using namespace std;

int maxCoins(int a, int b) {
    if (a >= b) return a;
    if (b > 2*a) return 0;
    return (2*a - b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        cout << maxCoins(a, b) << endl;
    }

    return 0;
}
