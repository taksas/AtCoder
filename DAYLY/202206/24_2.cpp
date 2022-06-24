// ABC231 - C

#include <iostream>
#include <vector>
#include <algorithm>

#define rp(n,i) for(int i=0;i<n;i++)

using namespace std;

int main() {
    int N, Q; cin >> N >> Q;
    vector<int> A(N);
    for( auto&& a : A ) {
        cin >> a;
    }

    sort(A.begin(), A.end());

    rp(Q,i) {
        int x; cin >> x;
        int ok = N, ng = -1, check;
        while(ok - ng > 1) {
            check = (ok + ng) / 2;
            if(A[check] >= x) {
                ok = check;
            } else {
                ng = check;
            }
        }
        cout << N - ok << endl;
    }
}