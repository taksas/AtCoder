// ABC231 - C

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, Q; cin >> N >> Q;
    vector<int> A(N);

    for(auto& a : A) {
        cin >> a;
    }

    sort(A.begin(), A.end());

    
    for (int i = 0; i < Q; i++) {
        int point, ok = N, ng = -1, temp; 
        cin >> temp;
        while ((ok - ng) > 1) {
            point = (ok + ng) / 2;
            if(A[point] >= temp) {
                ok = point;
            } else {
                ng = point;
            }
        }
        cout << N - ok << endl;
    }
    return 0;
}