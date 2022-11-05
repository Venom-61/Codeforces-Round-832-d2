#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. Two Groups 

void solve() {
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }

    cout << abs(sum) << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        // cout << "Case: #" << i << " ";
        solve();
    }

    return 0;
}
