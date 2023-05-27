// ABC303 - B
// REALTIME
// rnd
// SHOULD?


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
#

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
    int N, M; cin >> N >> M;
    vector<vector<int>> maps(M,vector<int>(N));
    map<pair<int,int>,int> mp;

    rep(i,M) {
        rep(j,N) {
            cin >> maps[i][j];
        }
    }
    
    rep(i,M) {
        rep(j,N-1) {
            mp[{maps[i][j], maps[i][j+1]}]++;
            mp[{maps[i][j+1], maps[i][j]}]++;
        }
    }

    int ans = 0;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            if(i == j) continue;
            if(mp[{i, j}] == 0) {
                ans++;
                mp[{i, j}] = 1;
                mp[{j, i}] = 1;
            }
        }
    }

    cout << ans << endl;
    return 0;
    
}