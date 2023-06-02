// ABC222 - D
// DIFF
// rnd
// SHOULD?


// -----     cpp_snippets_v8.6     -----
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
#define vpii(X)                 vector<pair<int, int>> X

#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max<int>(X1, X2)
#define chmin(X1, X2)           X1 = min<int>(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18
#define ll                      long long int


using namespace std;
using namespace atcoder;


int main() {
    int N; cin >> N;
    int maxim = 0;
    vector<int> A(N), B(N); rep(i,N) cin >> A[i]; rep(i,N) cin >> B[i];
    ll ans = 0;
    map<pair<int, int>, ll> mp;
    
    for(int i = A[0]; i <= B[0]; i++) mp[{0, i}] = 1;

    for(int i = 1; i < N; i++) {
        for(int k = min<int>(B[i-1], A[i]); k >= A[i-1]; k--) {
            mp[{i, A[i]}] += mp[{i-1, k}];
        }

        for(int j = A[i]+1; j <= B[i]; j++) {
            mp[{i, j}] = mp[{i, j-1}] + mp[{i-1, j}];
        }
    }

    for(int i = A[N-1]; i <= B[N-1]; i++) {
        ans += mp[{N-1, i}];
        ans %= 998244353;
    }
    cout << ans << endl;
    return 0;
    
}


