#include "/Users/sarinali/Downloads/test/stdc++.h"
using namespace std;
typedef long long ll;
string f,s;
ll quickpow(ll x, ll n) {
    if (n==0) {
        return 1;
    } else if (n%2==0) {
        ll y = quickpow(x, n/2);
        return (y*y)%10;
    }else {
        return (x*quickpow(x,n-1))%10;
    }
}

int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> f >> s;
    ll sumfirst= 0, sumsecond = 0;
    for (int i = 0; i < f.length(); i++) {
        int n = tolower(f[i]) - 'a' +1;
        // sum+=pow(n,i+1);
        sumfirst = ((sumfirst%10) + (quickpow(n, i+1)%10))%10;
    }
    for (int i = 0; i < s.length(); i++) {
        int n = tolower(s[i]) - 'a'+1;
        sumsecond = ((sumsecond%10) + (quickpow(n, i+1)%10))%10;
    }
    if (sumsecond==0) {
        sumsecond=10;
    }
    if (sumfirst==0) {
        sumfirst=10;
    }
    cout << sumsecond+sumfirst << "\n";
    return 0;
}