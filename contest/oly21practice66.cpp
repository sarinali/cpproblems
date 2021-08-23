#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
int n;
ll fact=1, ans = 0;
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact*=i;
    }
    for (int i = 1; i < sqrt(fact); i++) {
        if (i==sqrt(fact)&&fact%i==0) {
            ans++; ans%=MOD;
        }else if (fact%i == 0) {
            ans+=2; ans%=MOD;
        }
    }
    cout << ans<< "\n";
    // cout << 2%1 << "\n";
    return 0;
}