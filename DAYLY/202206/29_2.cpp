// keyence2021 - B



#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;



int main() {
    int N, K; cin >> N >> K;

    vector<int> A(N);
    vector<int> R(K);
    for(auto&& a : A) {
        cin >> a;
    }
    for(auto&& r : R) {
        r = -1;
    }
    sort(A.begin(), A.end());
    int temp = A[N - 1];

    map<int, int> mp;

    for(int i = 0; i < N; i++) {
        mp[A[i]]++;
    }

    
    for(int i = 0; i <= temp; i++) {
        for(int j = 0; j < K; j++) {
            if(R[j] == -1) {
                if(mp[i] > 0) {
                    mp[i]--;
                } else {
                    R[j] = i;
                }
            }
        }
    }



    int ret = 0;
    for(auto&& r : R) {
        if(r == -1) {
            ret += temp + 1;
        } else {
            ret += r;
        }

    }
    cout << ret << endl;
    return 0;
    
}
