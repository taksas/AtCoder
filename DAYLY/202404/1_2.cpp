// ABC010 - C
// 50%
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
    int txa, tya, txb, tyb, T, V, n; cin >> txa >> tya >> txb >> tyb >> T >> V >> n;
    vector<pair<int, int>> XY(n); for(auto& xy: XY) cin >> xy.first >> xy.second;
    for(const auto& xy: XY) {
        if(     sqrt(abs(txa - xy.first)*abs(txa - xy.first) + abs(tya - xy.second)*abs(tya - xy.second) ) +
                sqrt(abs(txb - xy.first)*abs(txb - xy.first) + abs(tyb - xy.second)*abs(tyb - xy.second) )
                <=
                T*V ) {
            cout << "YES" << endl;
            return 0;
        }
    }
    

    
    
    
    cout << "NO" << endl;
    return 0;
    
}