// ABC265 - B
// REALTIME
// rnd
// SHOULD?


// -----     cpp_snippets_v8.3     -----
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
#include <iomanip>
#include <sstream>

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     1e18
#define ll                      long long int


using namespace std;

int main() {
    ll N, M, T; cin >> N >> M >> T;
    vector<int> A(N-1); rep(i,N-1) cin >> A[i];
    map<int,int> mp;
    rep(i,M) {
        int x, y; cin >> x >> y;
        mp[x-2] = y;
    }
    rep(i,N-1) {
        T -= A[i];
        if(T <= 0) {
            coutd("No");
            return 0;
        } else {
            T += mp[i];
        }
    }
    coutd("Yes");
    
    
    return 0;
    
}