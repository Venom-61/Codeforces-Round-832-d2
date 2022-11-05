#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Swap Game

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mn = *min_element(a.begin(), a.end());

    if(mn == a[0]) 
        cout << "Bob\n";
    else 
        cout << "Alice\n";
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
