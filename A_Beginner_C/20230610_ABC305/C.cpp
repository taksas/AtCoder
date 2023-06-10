// ABC305 - C
// REALTIME
// rnd
// SHOULD?


// -----     cpp_snippets_v8.9     -----
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <map>
#include <string>
#include <cmath>
#include <ctime>
#include <functional>
#include <stack>
#include <queue>
#include <deque>
#include <tuple>
#include <cassert>
#include <bitset>
#include <iomanip>
#include <sstream>

#include <atcoder/all>

#define MAXINT                  2147483647
#define MININT                  -2147483648
#define MAXLL                   9223372036854775807
#define MINLL                   -9223372036854775808
#define INFI                    (INT_MAX / 2)
#define INFL                    (1LL << 60)
#define ll                      long long int

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define nextP(X)                next_permutation(X.begin(), X.end())

using namespace std;
using namespace atcoder;
using mint = modint998244353;


int main() {
    int H, W; cin >> H >> W;
    vector<vector<char>> S(H,vector<char>(W));
    rep(i,H) rep(j,W) cin >> S[i][j];
    
    int most_near = 0;
    pair<int,int> ans;
    
    rep(i,H) rep(j,W) {
        if(S[i][j] == '#') continue;
        int mn_suggest = 0, tateyoko = 0;
        for(int x = -1; x <= 1; x++) for(int y = -1; y <= 1; y++) {
            if(x == 0 && y == 0) continue;
            if(j+x < 0 || j+x >= W || i+y < 0 || i+y >= H) continue;
            if(S[i+y][j+x] == '#') {
                mn_suggest++;
                if(x == 0 || y == 0) tateyoko++;
            }
        }
        if(mn_suggest >= most_near && tateyoko >= 2) {
            most_near = mn_suggest;
            ans = {i, j};
        }
    }

    cout << ans.first+1 << " " << ans.second+1 << endl;
    return 0;
    
}