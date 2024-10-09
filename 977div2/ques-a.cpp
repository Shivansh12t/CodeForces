#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;

class Solution {
public:
    int solve_old(vector<int>& a){
        sort(a.begin(),a.end());
        while(a.size() > 1){
            int first = a[0]; a.erase(a.begin());
            int second = a[0]; a.erase(a.begin());
            a.insert(a.begin(),(first+second)/2);
        }
        return a[0];
    }
    int solve(vector<int>& a) {
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for (int num : a) {
            pq.push(num);
        }
        
        while (pq.size() > 1) {
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            
            pq.push((first + second) / 2);
        }
        
        return pq.top();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    Solution solution;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << solution.solve(a) << "\n";
    }

    return 0;
}
