// ARC130 - B
// 49%
// rnd
// COPYED


// -----     cpp_snippets_v8.10     -----
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
#define ull                     unsigned long long int

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define nextP(X)                next_permutation(X.begin(), X.end())

using namespace std;
using namespace atcoder;
using mint = modint998244353;


int main() {
    int H, W, C, Q; cin >> H >> W >> C >> Q;
    int vcount = 0, hcount = 0;
    vector<ll> ans(C+1);
    map<int, int> vpainted, hpainted;
    vector<int> t(Q), n(Q), c(Q); rep(i,Q) cin >> t[i] >> n[i] >> c[i];

    for(int i = Q-1; i >= 0; i--) {
        if(t[i] == 2) {
            if(vpainted[n[i]] != 0) continue;
            vcount++;
            vpainted[n[i]]++;
            ans[c[i]] += H - hcount;
        } else {
            if(hpainted[n[i]] != 0) continue;
            hcount++;
            hpainted[n[i]]++;
            ans[c[i]] += W - vcount;
        } 
    }
    for(int i = 1; i <= C; i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
    
}