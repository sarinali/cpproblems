#include <bits/stdc++.h>
using namespace std;
const int M = 1e5;
int n, q, ar[M+1], psa[M+1], mx = 0;
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar, ar+n, greater<int>());
    int gt = ar[0]; psa[0] = gt; 
    for (int i = 1; i < n; i++) {
        psa[i] = psa[i-1]+ ar[i];
        if (psa[i] > gt) {
            mx = i+1;
            gt = psa[i];
        }
        
    }
    for (int i = 0; i < q; i++)  {
        int x; cin >> x;
        if (x >= mx) {
            cout << gt << "\n";
        } else { 
            cout << psa[x-1] << "\n";
        }
    }
    // cout << gt << "\n";
    return 0;
}