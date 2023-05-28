// ABC303 - D
// DIRECT
// rnd
// COPYED


// -----     cpp_snippets_v8.5     -----
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



#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))

#define vpii(X)                 vector<pair<int, int>> X


#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18
#define ll                      long long int


using namespace std;
using namespace atcoder;


int main() {
    int x, y, z; cin >> x >> y >> z;
    string S; cin >> S;
    vector<vector<ll>> dp(2,vector<ll>(S.length()));
    
    char temp = S[0];
    if(temp == 'A') {
        dp[0][0] = y;
        dp[1][0] = x+z;
    } else {
        dp[0][0] = x;
        dp[1][0] = y+z;
    }
    
    for(int i = 1; i < S.length(); i++) {
        char temp = S[i];
        if(temp == 'A') {
            dp[0][i] = min<ll>(dp[0][i-1] + y, dp[1][i-1] + y + z);
            dp[1][i] = min<ll>(dp[0][i-1] + x + z, dp[1][i-1] + x);
        } else {
            dp[0][i] = min<ll>(dp[0][i-1] + x, dp[1][i-1] + x + z);
            dp[1][i] = min<ll>(dp[0][i-1] + y + z, dp[1][i-1] + y);
        }
    }
    
    cout << min<ll>(dp[0][S.length()-1],dp[1][S.length()-1]) << endl;
    
    
    return 0;
    
}