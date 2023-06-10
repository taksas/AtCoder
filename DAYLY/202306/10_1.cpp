// ABC206 - D
// 20%
// rnd
// SHOULD?


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
    dsu d(200000);
    set<int> list;
    int ans = 0;
    vector<int> A(N); vrep(A) { cin >> x; list.insert(x); }
    
    for(int i = 0; i < N/2; i++) {
        if(A[i] == A[N-i-1]) continue;
        d.merge(A[i], A[N-i-1]);
    }
    vector<vector<int>> dg = d.groups();
    rep(i,dg.size()) {
        if(dg[i].size() != 1) ans += dg[i].size() -1;
    }
    
    cout << ans << endl;
    return 0;
    
}