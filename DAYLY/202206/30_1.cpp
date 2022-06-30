// keyence2021 - B



#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;



int main() {
    int N, K; cin >> N >> K;
    vector<int> KV(K);
    map<int, int> mp;
    int maxint = -1;
    for (int i = 0; i < N; i++) {
        int temp; cin >> temp;
        maxint = max(maxint, temp);
        mp[temp]++;
    }
    for (auto&& kv : KV) {
        kv = 0;
    }

    int ret = 0;
    for (int i = 0; i <= maxint; i++) {
        for (int j = 0; j < K; j++) {
            if(KV[j] == 0) {
                if(mp[i] > 0) {
                    mp[i]--;
                } else {
                    ret += i;
                    KV[j] = 1;
                }
            }
        }
    }
    for (auto&& kv : KV) {
        if(kv == 0) {
            ret += maxint + 1;
        }
    }
    cout << ret << endl;
    return 0;
}