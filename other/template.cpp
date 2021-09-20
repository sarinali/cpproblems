// custom comparator

struct t { 
    int to, time, cm; 
}; 
class tc {
    public: 
        bool operator()(t const& lhs, t const& rhs) const {
            return lhs.time > rhs.time;
        }
};
// priority_queue<t, vector<t>, tc> pq; example of use 

// typedefs

typedef pair<int, int> pi;
typedef long long ll;

// defines

#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MP make_pair
#define PB push_back

// default template

#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    return 0;
}

