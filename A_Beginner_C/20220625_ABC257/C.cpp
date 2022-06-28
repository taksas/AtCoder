// ABC257 - C 

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
/*
    for (auto r : R) {
        cout << r.first << " ! " << r.second << endl;
    }
*/


    int r1;
    for (r1 = 1; r1 < N; r1++) {
        if(R[r1 - 1].second != R[r1].second) {
                break;
        }
    }

    int r2;
    for (r2 = 1; r2 < N; r2++) {
        if(R[N - r2].second != R[N - r2 - 1].second) {
                break;
        }
    }

    int r;
    if( r1 >= r2 ) {
        if (N - r1 + 1 > r1) {
            r = N - r1 + 1;
        } else {
            r = r1;
        }

        int check = 0;
        for(int i = r1; i < N; i++) {
            if(R[i - 1].first != R[i].first) {
                break;
            }
        check++;
        }
        cout << r + check << endl;

    } else {
        if (N - r2 + 1 > r2) {
            r =  N - r2 + 1;
        } else {
            r = r2;
        }

        int check = 0;
        for(int i = N - r2; i < N; i++) {
            if(R[i - 1].first != R[i].first) {
                break;
            }
        check++;
        }
        cout << r + check << endl;
    }
}