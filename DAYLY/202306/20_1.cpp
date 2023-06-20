// ABC092 - C
// 49%
// rnd
// SHOULD?


// -----     cpp_snippets_v8.10     -----
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
    vector<int> A(N), ans(N); vrep(A) cin >> x;
    int all = abs(A[0]) + abs(A[N-1]);
    for(int i = 1; i < N; i++) all += abs(A[i-1] - A[i]);
    int departure = 0;
    for(int i = 1; i < N-1; i++) {
        ans[i] = (abs(A[i-1] - A[i]) + abs(A[i] - A[i+1])) - abs(A[i-1] - A[i+1]);
    }
    ans[0]= (abs(0 - A[0]) + abs(A[0] - A[1])) - abs(0 - A[1]);
    ans[N-1] = (abs(A[N-2] - A[N-1]) + abs(A[N-1] - 0)) - abs(A[N-2] - 0);
    vrep(ans) cout << all - x << endl;
    return 0;
    
}