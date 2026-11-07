
#include <bits/stdc++.h>
using namespace std;


void solve() {
    string borze_message;
    cin >> borze_message;
    int len = borze_message.size();

    for (int i = 0; i < len; i++) {
        if (borze_message[i] == '.') {
            cout << '0';
        } else if (borze_message[i] == '-' && borze_message[i + 1] == '.') {
            cout << '1';
            i++;
        } else  if (borze_message[i] == '-' && borze_message[i] == '-') {
            cout << '2';
            i++;
        }
    }
    cout << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
