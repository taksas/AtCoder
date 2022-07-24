// ABC261 - D
// DIRECT
// 1st
// SHOULD?

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


// -----     cpp_snippets_v4     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)

#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(X)             if(DEBUGGING) { X }

#define INF                     1e18


#define DEBUGGING 0

using namespace std;

int main() {
    int N, M; cin >> N >> M;

    vector<int> X(N);
    vrep(X) cin >> x;

    map<int,int> Y;
    rep(i,M) {
        int temp; cin >> temp;
        cin >> Y[temp];
    }

    vector<vector<long long int>> dp(N+1,vector<long long int>(N+1, -1e18));

    dp[0][0] = 0;
    for(int i = 1; i <= N; i++) for(int j = 1; j <= N; j++) {
        chmax(dp[i][0], dp[i-1][j-1]);
        chmax(dp[i][j], dp[i-1][j-1] + X[i-1] + Y[j]);
        
        dcoutd(dp[i][j]);
    }

    long long int ans = -1e18;
    rep(i,N+1) chmax(ans, dp[N][i]);
    coutd(ans);
    return 0;
    
}