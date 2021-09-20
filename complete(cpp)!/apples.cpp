#include "/Users/sarinali/Downloads/test/stdc++.h"
using namespace std;
int n, adds=0;
vector<int> v;
void print() {
    adds++;
    cout << n << "=";
    for (int i = 0; i < v.size(); i++) {
        if (i != v.size()-1) {
            cout << v[i] << "+";
        }else {
            cout << v [i];
        }
    }
    cout << "\n";
}

void sum(int n, int index) {
    if (n==0 && v.size() > 1) {
        print();
    }
    for (int i=index; i <= n; i++) {
        v.push_back(i);
        sum(n-i, i);
        v.pop_back();
    }
}

int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> n;
    sum(n, 1);
    cout << "total=" << adds << "\n";
    return 0;
}