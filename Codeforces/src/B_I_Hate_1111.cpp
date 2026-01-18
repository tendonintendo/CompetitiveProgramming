#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
void solve() {
    ll x; cin >> x;
    if (x > 1099) cout << "YES\n";
    else {
        for (ll i = 0; i * 111 <= x; i++) {
            if ((x - i * 111) % 11 == 0) {
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
    }
}
 
int main() {
    cin.tie(0) -> sync_with_stdio(false), cout.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}