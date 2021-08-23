#include <bits/stdc++.h>
using namespace std;
const int M = 1e6+2;
int n, ar[27][M], q;
string s;
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    getline(cin, s); cin >> q;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < s.size(); j++) {
            if (s[j]-97==i) {
                ar[i][j+1]+=1;
            }
            ar[i][j+2] = ar[i][j+1];
        }
    }
    for (int i = 0; i < q; i++) {
        int l, r; char tt;
        cin >> l >> r >> tt;
        cout << ar[tt-97][r] - ar[tt-97][l-1] << "\n";
    }
    return 0;
}