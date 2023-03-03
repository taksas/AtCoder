// ABC291 - D
// DIFF
// rnd
// WAIT_DROPBOX

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


// -----     cpp_snippets_v2     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define repe(i,n)               for (int i = 0; i <= n; i++)
#define rrep(i,n)               for (int i = n; i > 0; i--)
#define rrepe(i,n)              for (int i = n; i >= 0; i--)
#define rep1(i,n)               for (int i = 1; i < n; i++)
#define rep1e(i,n)              for (int i = 1; i <= n; i++)
#define rrep1(i,n)              for (int i = n; i > 1; i--)
#define rrep1e(i,n)             for (int i = n; i >= 1; i--)

#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))

#define vpii(X)                 vector<pair<int, int>> X
#define vpss(X)                 vector<pair<string, string>> X
#define vpcc(X)                 vector<pair<char, char>> X
#define vpis(X)                 vector<pair<int, string>> X
#define vpic(X)                 vector<pair<int, char>> X
#define vpsi(X)                 vector<pair<string, int>> X
#define vpsc(X)                 vector<pair<string, char>> X
#define vpci(X)                 vector<pair<char, int>> X
#define vpcs(X)                 vector<pair<char, string>> X
#define vint(X)                 vector<int> X
#define vchar(X)                vector<string> X
#define vstring(X)              vector<char> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define dcoutd(X)               if(DEBUGGING) cout << X << endl


#define DEBUGGING 1

using namespace std;

int main() {
    int N; cin >> N;
    vector<pair<int,int>> AB(N);
    vector<vector<long long int>> dp(N,vector<long long int>(2));
    

    for(int i = 0; i < N; i++) {
        cin >> AB[i].first >> AB[i].second;
    }

    dp[N-1][0] = 1; 
    if(AB[N-1].first != AB[N-1].second) dp[N-1][1] = 1;    
    else dp[N-1][1] = 0;
    

    for(int i = N-2; i >= 0; i--) {
        dp[i][0] = 0; dp[i][1] = 0;
        if(AB[i].first != AB[i].second) {
            if(AB[i].first != AB[i+1].first) dp[i][0] += dp[i+1][0];
            if(AB[i].first != AB[i+1].second) dp[i][0] += dp[i+1][1];
            if(AB[i].second != AB[i+1].first) dp[i][1] += dp[i+1][0];
            if(AB[i].second != AB[i+1].second) dp[i][1] += dp[i+1][1];
        } else {
            if(AB[i].first != AB[i+1].first) dp[i][0] += dp[i+1][0];
            if(AB[i].first != AB[i+1].second) dp[i][0] += dp[i+1][1];
            dp[i][1] = 0;
        }
    }
    
    cout << (dp[0][0] + dp[0][1])%998244353 << endl;
    return 0;
    
}