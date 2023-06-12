// ABC266 - D
// 21%
// 2nd
// YAY!!


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
    int N; cin >> N;
    map<pair<int,int>, ll> mp;
    int Tmax = 0;
    rep(i,N) {
        int t1, t2, t3; cin >> t1 >> t2 >> t3;
        mp[{t1, t2}] += t3;
        Tmax = max<int>(Tmax, t1);
    }
    
    vector<vector<ll>> dp(5,vector<ll>(Tmax+1));
    dp[0][0] = 0;
     for(int j = 1; j <= Tmax; j++) {
        rep(i,5) {
            if(j < i) break;
            ll tempmax = dp[i][j-1];
            if(i > 0) tempmax = max<ll>(tempmax, dp[i-1][j-1]);
            if(i < 4) tempmax = max<ll>(tempmax, dp[i+1][j-1]);
            dp[i][j] = tempmax + mp[{j, i}];
        }
    }
    ll maxim = 0;
    rep(i,5) maxim = max<ll>(maxim, dp[i][Tmax]);
    cout << maxim << endl;
    return 0;
    
}