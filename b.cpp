#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

#define int long long

// B. BANBAN

void solve() {
    int n;
    cin >> n;

    int a, b;
    
    if(n == 1) {
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
    } else if(n == 2) {
        cout << 1 << endl;
        cout << 2 << " " << 6 << endl;
    } else {
        cout << (n + 1) / 2 << endl;
        int i;
        for(i = 0; i < (n + 1) / 2; i++) {
            cout << i * 3 + 1 << " " << (n - i) * 3 << endl;
        }
    }
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
