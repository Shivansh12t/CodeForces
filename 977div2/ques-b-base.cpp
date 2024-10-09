#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void solve(int n, int x, const vector<int>& a) {
        // Your algorithm implementation goes here
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    Solution solution;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        solution.solve(n, x, a);
    }

    return 0;
}
