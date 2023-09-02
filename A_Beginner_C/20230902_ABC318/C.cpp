// ABC318 - C
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

#define rep(i,st,fn)            for (long long int i = st; i < fn; i++)
#define rrep(i,st,fn)           for (int i = st; i >= fn; i--)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))

using namespace std;
using namespace atcoder;
using mint0 = modint998244353;
using mint1 = modint1000000007;


int main() {
    long long int N, D, P; cin >> N >> D >> P;
    vector<long long int> F(N); vrep(F) cin >> x;
    long long int ans = 0;
    vrep(F) ans += x;
    sort(F.rbegin(), F.rend());
    long long int target = 0, target_next = min<long long int>(target+D, N);
    while(1) {
        long long int ans_D = ans;
        long long int change = 0;
        rep(i,target, target_next) change += F[i];
        if(change < P) break;
        ans = ans - change + P;
        target = target_next;
        target_next = min<long long int>(target+D, N);
    }
    cout << ans << endl;
    return 0;
    
}