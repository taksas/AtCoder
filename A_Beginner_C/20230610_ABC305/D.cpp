// ABC305 - D
// REALTIME
// rnd
// NOT_YET


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
    vector<pair<int,int>> time(N);
    rep(i, N) {
        cin >> time[i].first;
        time[i].second = -1;
    }
    int Q; cin >> Q;
    rep(i,Q) {
        int temp1, temp2; cin >> temp1 >> temp2;
        time.push_back({temp1, i});
        time.push_back({temp2, i});
    }
    sort(time.begin(), time.end());
    vector<pair<int, int>> ans(Q, {-1, -1});
    vector<int> dp(time.size()); dp[0] = 0;
    
    bool isSleeping = false;
    rep(i,time.size()) {
        if(time[i].second != -1) {
            if(isSleeping) dp[i] = time[i].first - time[i-1].first + dp[i-1];
            else dp[i] = dp[i-1];
            if(ans[time[i].second].first == -1) ans[time[i].second].first = dp[i];
            else ans[time[i].second].second = dp[i];
        } else {
            if(isSleeping) {
                dp[i] = time[i].first - time[i-1].first + dp[i-1];
                isSleeping = false;
            } else {
                if(i != 0) dp[i] = dp[i-1];
                isSleeping = true;
            }
        }
    }
    rep(i,Q) cout << ans[i].second - ans[i].first << endl;
    
    
    
    return 0;




    
    
}
