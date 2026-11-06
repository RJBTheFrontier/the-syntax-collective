#include <bits/stdc++.h>
using namespace std;


void solve() {
    int w;
    cin >> w;
    
    // Check if the weight is even and strictly greater than 2
    if (w % 2 == 0 && w > 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
