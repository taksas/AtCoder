// ABC306 - D
// DIRECT
// 2nd
// YAY!


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
    vector<pair<int, int>> XY(N);
    vrep(XY) {
        cin >> x.first >> x.second;
    }

    
    vector<vector<ll>> dp(N,vector<ll>(2));
    
    

    if(XY[0].first == 1) {
        dp[0][1] = XY[0].second;
    } else {
        dp[0][0] = max<ll>(0, XY[0].second);
    }
    
    for(int i = 1; i < N; i++) {
        if(XY[i].first == 1) {
            dp[i][1] = max<ll>(dp[i-1][1], (dp[i-1][0] + XY[i].second));
            dp[i][0] = dp[i-1][0];
        } else {
            dp[i][1] = dp[i-1][1];
            dp[i][0] = max<ll>(dp[i-1][1] + XY[i].second, dp[i-1][0] + max<ll>(0, XY[i].second));
            
        }

    }
    
    
    cout << max<ll>(dp[N-1][1], dp[N-1][0]) << endl;
    
    return 0;
    
}