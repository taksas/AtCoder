// ABC231 - C
 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main() {
    int N; cin >> N;
    int Q; cin >> Q;
    vector<int> A(N);
    vector<int> X(Q);
    vector<int> Xtemp(Q);
    vector<int> L(Q + N);
    
    int ltemp = 0;
    for(auto& a : A) {
        cin >> a;
        L[ltemp++] = a;
    }
    for(auto& x : X) {
        cin >> x;
        L[ltemp++] = x;
    }
    Xtemp = X;
    sort(L.begin(), L.end(), greater<int>());
    sort(A.begin(), A.end(), greater<int>());
    sort(X.begin(), X.end(), greater<int>());

    vector<pair<int, int>> R;
    
    int temp = 0, temp1 = 0;
    for(auto& l : L) {
        if(X[temp1] < l) {
            temp++;
        }
        if(X[temp1] == l) {
            R[temp1] = {l, X[temp1]};
            temp1++;
        }
    }

    for(auto[l1, l2] : R) {
        for(auto& x : X) {
            if(x == l1) {
                cout << l2 << endl;
            }
        }
    }
    return 0;
}