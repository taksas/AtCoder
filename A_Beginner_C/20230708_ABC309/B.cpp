// ABC309 - B
// REALTIME
// rnd
// SHOULD?


// -----     cpp_snippets_v8.12     -----
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

#define rep(i,st,fn)            for (int i = st; i < fn; i++)
#define rrep(i,st,fn)           for (int i = st; i >= fn; i--)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))

using namespace std;
using namespace atcoder;
using mint0 = modint998244353;
using mint1 = modint1000000007;


int main() {
    int N; cin >> N;
    vector<vector<char>> A(N,vector<char>(N)), B;
    rep(i,0,N) rep(j,0,N) cin >> A[i][j];
    B = A;
    rep(i,1,N-1) B[0][i] = A[0][i-1];
    rep(i,1,N-1) B[N-1][i] = A[N-1][i+1];
    rep(i,1,N-1) B[i][N-1] = A[i-1][N-1];
    rep(i,1,N-1) B[i][0] = A[i+1][0];
    B[0][0] = A[1][0];
    B[0][N-1] = A[0][N-2];
    B[N-1][0] = A[N-1][1];
    B[N-1][N-1] = A[N-2][N-1];
    
    rep(i,0,N) {
        rep(j,0,N) {
            cout << B[i][j];
        }
        cout << endl;
    }
    return 0;
    
}