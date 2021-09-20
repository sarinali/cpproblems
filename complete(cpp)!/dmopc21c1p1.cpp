#include <iostream>
using namespace std;
typedef long long ll;
const int M = 1e5;
int n, ar[2*M+1];
ll a, d;
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        if (ar[i]%2==0) {
            d+=ar[i]/2;
        } else {
            a+=(ar[i]+1)/2;
        }
    }
    if (a>=d) {
        cout << "Alice" << "\n";
    } else {
        cout << "Duke" << "\n";
    }
    return 0;
}