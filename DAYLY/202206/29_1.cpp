// keyence2021 - B

// NOT_YET

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;



int main() {
    int N, K; cin >> N >> K;
    int r1, r2;
    vector<int> A(N);
    vector<int> R(K);
    vector<int> R1(K);

    for(auto&& a : A) {
        cin >> a;
    }
    for(auto&& r : R) {
        r = -1;
    }
    for(auto&& r1 : R1) {
        r1 = 1;
    }
    sort(A.begin(), A.end());

    int check = 0, temp = A[N-1];
    for(int i = 0; i < A[N-1]; i++) {

        for(int j = 0; j < K; j++) {
            if(R1[j]) {
                for(int k = i; k < N; k++) {
                    if(A[k] == i) {
                        A[k] = -1;
                        check = 0;
                        break;
                    }
                }
                if(check) {
                    if(R1[j]) {
                        R1[j] = 0;
                        R[j] = i;
                    }
                }
                check = 1;
            }
        }
    }

    for(int j = 0; j < K; j++) {
        if(R1[j]) {
            R[j] = temp + 1;
        }
    }



    int ret= 0;
    for(int i = 0; i < K; i++) {
        ret += R[i];

    }

    
    cout << ret << endl;
    return 0;
    
}
