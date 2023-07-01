// ABC308 - D
// REALTIME
// rnd
// NOT_YET


// -----     cpp_snippets_v8.11     -----
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

#define rep(i,st,fn)            for (int i = st; i < fn; i++)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define nextP(X)                next_permutation(X.begin(), X.end())

using namespace std;
using namespace atcoder;
using mint = modint998244353;



int main() {
    map<char,pair<char, char>> snuke;
    rep(i,0,26) snuke['a'+i] = {'\n', '\n'};
    snuke['s'] = {'\n', 'n'}; snuke['n'] = {'\n', 'u'}; snuke['u'] = {'\n', 'k'}; snuke['k'] = {'\n', 'e'}; snuke['e'] = {'\n', 's'};
    int H, W; cin >> H >> W;
    vector<vector<char>> S(H,vector<char>(W));
    dsu d(H*1000+W);
    rep(i,0,H) {
        string temp; cin >> temp;
        rep(j,0,W) S[i][j] = temp[j];
    }
    vector<vector<bool>> dp(H,vector<bool>(W,false));
    if(S[0][0] == 's') dp[0][0] = true;
    rep(io,0,300) rep(i,0,H) rep(j,0,W) {
        if(dp[i][j] != true) continue;
        if(i != 0 && (snuke[S[i][j]].first == S[i-1][j] || snuke[S[i][j]].second == S[i-1][j])) dp[i-1][j] = true;
        if(i < H-1 && (snuke[S[i][j]].first == S[i+1][j] || snuke[S[i][j]].second == S[i+1][j])) dp[i+1][j] = true;
        if(j != 0 && (snuke[S[i][j]].first == S[i][j-1] || snuke[S[i][j]].second == S[i][j-1])) dp[i][j-1] = true;
        if(j < W-1 && (snuke[S[i][j]].first == S[i][j+1] || snuke[S[i][j]].second == S[i][j+1])) dp[i][j+1] = true;
    }

    cout << (dp[H-1][W-1] ? "Yes" : "No") << endl;
    
    return 0;
    
}

