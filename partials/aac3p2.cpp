// partials 20/100

#include <bits/stdc++.h>
using namespace std;
const int M = 1000;
int k, d, mn = INT_MAX, ar[M];
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> k >> d;
    for (int i = 0; i < d; i++) {
        cin >> ar[i];
    }
    sort(ar, ar+d);
    if (d ==1 && ar[0] == 0) {
        cout << -1 << "\n";
    } else {
        if (ar[0]!=0) {
            for (int i = 0; i < k; i++) {
                cout << ar[0];
            }
            cout << "\n";
        } else {
            cout << ar[1];
            for (int i = 0; i < k-2; i++) {
                if (k>1) {
                    cout << ar[1];
                } else {
                    cout << "\n";
                }
            }
        }
    }
    return 0;
}