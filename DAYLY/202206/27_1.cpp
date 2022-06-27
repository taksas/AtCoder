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
    int big = 0;
    rp (N,temp) {
        char T = S[temp];
        R.push_back({ W[temp], T });

        if(T == '1') {
            big++;
        }
    }

    sort(R.begin(), R.end());


    int x = big;

    rp (N,i) {
        
        if(R[i].second == '1') {
            x--;
        } else {
            x++;
        }
        if ( R[i].first == R[i + 1].first && i != N - 1 ) {
            continue;
        }
        big = max(x, big);
    }

    cout << big << endl;

    return 0;
}