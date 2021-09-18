#include "/Users/sarinali/Downloads/test/stdc++.h"
using namespace std;
int ar[] = {1, 5, 2, 7, 4, 3, 8, 6, 9};
int partition(int low, int hi) {
    int pivot = ar[hi];
    int i = low-1;
    // place the items 
    for (int j = low; j <= hi-1; j++) {
        if (ar[j]<=pivot) {
            i++;
            swap(ar[i], ar[j]);
        }
    }
    swap(ar[i+1], ar[hi]);
    return i+1;
}
void quicksort(int low, int hi) {
    if (low < hi) {
        int partInd = partition(low, hi);
        quicksort(low, partInd-1);
        quicksort(partInd, hi);
    }
}
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    int n = 9;
    quicksort(0, n-1);
    for (auto i : ar) {
        cout << i << " ";
    }
    return 0;
}