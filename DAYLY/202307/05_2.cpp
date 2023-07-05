// ABC286 - D
// 50%
// rnd
// COPYED


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
    int N, X;cin >> N >> X;
    vector<int> listv;
    rep(i,0,N) {
        int a, b; cin >> a >> b;
        rep(j,0,b) listv.push_back(a);
    }
    int limit = listv.size();
    vector<vector<bool>> dp(limit+1,vector<bool>(X+1));
    dp[0][0] = true;
    rep(i,1,limit+1) {
        rep(j,0,X+1) {
            if(dp[i-1][j] == true) {
                dp[i][j] = true;
                if(j+listv[i-1] <= X) dp[i][j+listv[i-1]] = true;
            }
        }
    }
    cout << (dp[limit][X] ? "Yes" : "No") << endl;
    return 0;
    
}
