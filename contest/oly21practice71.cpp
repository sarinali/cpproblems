#include <bits/stdc++.h>
using namespace std;
const int M = 2*1e5;
char t[M];
int n, k;
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    for (int i = 0; i < n; i++) {
        if (t[i] == 'x') {
            if (k > 0) 
                k--;
        } else {
            k++;
        }
    }
    cout << k << "\n";
    return 0;
}