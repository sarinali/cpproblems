#include "/Users/sarinali/Downloads/test/stdc++.h"
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
int n;
ll ar[3],q;
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
    ll a,b,c;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c>> q;
        int diff = b-a;
        if (c-b==diff) {
            // arithmetic a1 + (n-1) diff
            ll ans = (a + (q-1)*diff)%MOD;
            cout << ans << "\n";
        } else {
            // geometric a1(r)^n-1
            ll ratio = b/a;
            // ll y = quickpow(ratio, q-1);
            // ll ans = ((ar[0]%MOD)*(y%MOD))%MOD;
            // cout << ans << "\n";
            cout << (a*quickpow(ratio, q-1))%MOD << "\n";
        }
    }
    return 0;
}