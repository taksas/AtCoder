// ABC230 - C
// 50%
// 2nd
// COPYED


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

#define ll                      long long int
#define rep(i,n)                for (ll i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max<int>(X1, X2)
#define chmin(X1, X2)           X1 = min<int>(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18



using namespace std;
using namespace atcoder;


int main() {
    ll N, A, B; cin >> N >> A >> B;
    ll P, Q, R, S; cin >> P >> Q >> R >> S;
    map<pair<ll,ll>,int> mp;
    

    
    ll AB = A+ B, ABm = A-B;
    for (ll i = P; i <= Q; i++) {
        for (ll j = R; j <= S; j++) {
            cout << ((i+j == AB || i-j == ABm) ? "#" : ".");
        }
        cout << endl;
    }
    return 0;
    
}