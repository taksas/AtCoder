// ABC233 - D
// 20%
// rnd
// NOT_YET
 
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <ctime>
#include <functional>
#include <stack>
#include <queue>
#include <tuple>
#include <cassert>
#include <bitset>
 
 
// -----     cpp_snippets_v5     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)
 
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X
 
#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
 
#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(X)             if(DEBUGGING) { X }
 
#define INF                     1e18
#define ll                      long long int
 
 
#define DEBUGGING 1
 
using namespace std;
 
int main() {
    ll N, K, ans = 0; cin >> N >> K;
    vector<ll> A(N); vrep(A) cin >> x;
    vector<vector<ll>> dp(N,vector<ll>(N));
    rep(i,N) {
        dp[0][i] = A[i]; 
    }
    for(int i = 1; i < N; i++) rep(j,N-i) {
        dp[i][j] = dp[0][j] + dp[i-1][j+1];
    }
    
    rep(i,N) rep(j,N-i) {
        if(dp[i][j] == K) {
            ans++;
        }
    }
 
    coutd(ans);
    
    return 0;
    
 
    
 
 
}