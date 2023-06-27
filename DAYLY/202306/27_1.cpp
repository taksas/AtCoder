// ABC085 - C
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
    int N, Y; cin >> N >> Y;
    rep(i,N+1) {
        rep(j,N+1) {
            if(5000*j > Y || N-i-j < 0) break;
            if(10000*i+5000*j+1000*(N-i-j) == Y) {
                cout << i << " " << j << " " << (N-i-j) << endl;
                return 0;
            }
        }
        if(10000*i > Y) break;
    }
    
    
    
    
    
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
    
}