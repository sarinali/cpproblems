#include "/Users/sarinali/Downloads/test/stdc++.h"
using namespace std;
void fun(int i, int n, vector<int> &comb) {
    if (i>n) {
        for(int x: comb) {
            cout << x << " ";
        }
        cout << "\n";
        return;
        // choose i
        fun(i+1, n, comb);
        // dont choose i
        comb.push_back(i); fun(i+1, n, comb); comb.pop_back();
    }
}

int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    vector<int> comb;
    int n; cin >> n;
    cout << "hi" << endl;
    fun(1,n,comb);
    return 0;
}