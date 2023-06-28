// AAA000 - Q
// DIFF
// rnd
// SHOULD?


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
    int N, M; cin >> N >> M;
    dsu d(N+1);
    map<int, int> mp;
    rep(i,M) {
        int u, v; cin >> u >> v;
        d.merge(u, v);
        mp[u]++;
    }
    
    vector<vector<int>> dg = d.groups();
    bool ans = true;
    for(int i = 1; i < dg.size(); i++) {
        int temp = 0;
        rep(j,dg[i].size()) temp += mp[dg[i][j]];
        if(temp != dg[i].size()) {
            ans = false;
            break;
        }
    }
    
    cout << ( ans ? "Yes" : "No") << endl;
    
    return 0;
    
}