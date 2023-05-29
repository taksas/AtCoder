// ABC230 - C
// 50%
// rnd
// CAN_NOT


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
    
    ll s1 = max<ll>(1-A, 1-B);
    ll f1 = min<ll>(N-A, N-B);
    while(s1 != f1+1) {
        mp[{A+s1,B+s1}]++;
        s1++;
    }

    ll s2 = max<ll>(1-A, B-N);
    ll f2 = min<ll>(N-A, B-1);
    while(s2 != f2+1) {
        mp[{A+s2,B-s2}]++;
        s2++;
    }
    
    for (ll i = P; i <= Q; i++) {
        for (ll j = R; j <= S; j++) {
            cout << (mp[{i, j}] ? "#" : ".");
        }
        cout << endl;
    }
    return 0;
    
}