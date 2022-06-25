// ABC257 - C 

// NOT_YET

#include <iostream>
#include <vector>
#include <algorithm>

#define rp(n,i) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    vector<int> W(N);
    for (auto&& w : W) {
        cin >> w;
    }

    vector<pair<int, char>> R;
    rp (N,temp) {
        char T = S[temp];
        R.push_back({ W[temp], T });
    }

    sort(R.begin(), R.end());

    for (auto r : R) {
        cout << r.first << " ! " << r.second << endl;
    }



    vector<int> L;

    for (int i = 0; i < N; i++) {
        if(R[i].second != '1') {
                break;
        }
    }
}