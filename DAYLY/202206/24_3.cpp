// AGC027 - A

#include <iostream>
#include <vector>
#include <algorithm>

#define rp(n,i) for(int i=0;i<n;i++)

using namespace std;

int main() {
    int N, x; cin >> N >> x;
    vector<int> A(N);
    for (auto&& a : A) {
        cin >> a;
    }

    sort(A.begin(), A.end());

    int r = N + 2;
    rp(N,i) {
        x -= A[i];
        if(x == 0) {
            r = i + 1;
            break;
        } else if(x < 0) {
            r = i;
            break;
       }
    }
    if (r == N + 2) {
        cout << N - 1 << endl;
    } else {
        cout << r << endl;
    }
    return 0;
}