// ABC257 - B

#include <iostream>
#include <vector>
#include <algorithm>

#define rp(n,i) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N, K, Q; cin >> N >> K >> Q;
    vector<int> L(K);
    for (auto&& l : L) {
        cin >> l;
    }
    rp(Q, i) {
        sort(L.begin(), L.end());
        int temp; cin >> temp;
        if (L[temp - 1] == N || L[temp - 1] + 1 == L[temp]) {
            ;
        } else {
            L[temp - 1] += 1;
        }
    }

    sort(L.begin(), L.end());
    rp(K, i) {
        cout << L[i] << " ";
    }
    
    cout << endl;
    return 0;

}