// ABC309 - C
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
    int N, K; cin >> N >> K;
    unsigned long long int drink = 0;
    vector<pair<int,int>> AB(N);
    vrep(AB) {
        cin >> x.first >> x.second;
        drink += x.second;
    }
    sort(AB.begin(), AB.end());
    if(drink <= K) {
        cout << 1 << endl;
        return 0;
    }
    rep(i,0,N) {
        drink -= AB[i].second;
        if(drink <= K) {
            cout << AB[i].first+1 << endl;
            return 0;
        }
    }
    cout << AB[N-1].first +1 << endl;
    return 0;
    
}