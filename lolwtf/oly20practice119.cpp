#include "/Users/sarinali/Downloads/test/stdc++.h"
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
int n, q;
ll ar[3];
ll quickpow(ll x, ll n) {
    if (n==0) {
        return 1;
    } else if (n%2==0) {
        ll y = quickpow(x, n/2);
        return (y*y)%MOD;
    } else {
        return (x*quickpow(x,n-1))%MOD;
    }
}

int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> ar[j];
        }
        cin >> q;
        int diff = ar[1]-ar[0];
        if (ar[2]-ar[1]==diff) {
            // arithmetic a1 + (n-1) diff
            ll ans = (ar[0] + (q-1)*diff)%MOD;
            cout << ans << "\n";
        } else {
            // geometric a1(r)^n-1
            ll ratio = ar[1]/ar[0];
            ll y = quickpow(ratio, q-1);
            ll ans = ((ar[0]%MOD)*(y%MOD))%MOD;
            cout << ans << "\n";
            // cout << (ar[0]*y)%MOD << "\n";
        }
    }
    return 0;
}