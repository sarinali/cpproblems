#include <iostream>
using namespace std;
const int M = 1e5;
int n, ar[2*M+1], odd=0, even=0;
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        if (ar[i]%2==0) {
            even++;
        } else {
            odd++;
        }
    }
    if (n==2){
        if (even > odd) {
            cout << "Alice" << "\n";
        } else {
            cout << "Duke" << "\n";
        }
    } else  {
        if (even>=odd) {
            cout << "Alice" << "\n";
        }else {
            cout << "Duke" << "\n";
        }
    }
    
    return 0;
}