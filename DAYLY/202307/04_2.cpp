// ARC117 - B
// 50%
// rnd
// SHOULD?


// -----     cpp_snippets_v8.11     -----
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
#define ull                     unsigned long long int

#define rep(i,st,fn)            for (int i = st; i < fn; i++)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define nextP(X)                next_permutation(X.begin(), X.end())

using namespace std;
using namespace atcoder;
using mint = modint998244353;


int main() {
    using mint1 = modint1000000007;
    int N; cin >> N;
    vector<int> A(N); vrep(A) cin >> x;
    sort(A.begin(), A.end());
    
    mint1 ans = A[0]+1;
    vector<int> diff(N-1);
    rep(i,1,N) {
        diff[i-1] = A[i] - A[i-1];
    }
    rep(i,0,N-1) {
        ans *= diff[i]+1;
    }
    cout << ans.val() << endl;
    return 0;
    
}