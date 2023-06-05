// ABC267 - D
// 21%
// rnd
// SHOULD?


// -----     cpp_snippets_v8.7     -----
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

#define INF                     8e18
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
    int N, M; cin >> N >> M;
    vector<int> A(N); rep(i,N) cin >> A[i];
    ll ans = 0;

    vector<vector<ll>> dp(N+1,vector<ll>(N+1));
    
    dp[0][0] = 0;
    dp[0][1] = -INF;
    for(int i = 1; i <= N; i++) {
        for(int j = 0; j <= M; j++) {
            if(j==0) dp[i][0] = 0;
            else if(j > i) dp[i][j] = -INF;
            else dp[i][j] = max<ll>(dp[i-1][j], dp[i-1][j-1] + j * A[i-1]);
        }
    }

    cout << dp[N][M] << endl;
    return 0;
    
}