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
    int big = 0;
    rp (N,temp) {
        char T = S[temp];
        R.push_back({ W[temp], T });

        if(T == '1') {
            big++;
        }
    }

    sort(R.begin(), R.end());

    vector<int> P;
    int temp = 0;
    rp (N,i) {
        if ( R[i].first == R[i + 1].first && i != N - 1) {
            continue;
        }
        if(R[i].second == '1') {
            big--; temp++;
        } else {
            big++; temp++;
        }
        P.push_back(big);
    }
    sort(P.begin(), P.end());


    if( P[0] <= N / 2 && P[temp - 1] <= N / 2) {
        cout << N - P[0] << endl;
    } else {
        cout << P[temp - 1] << endl;
    }
    return 0;
}