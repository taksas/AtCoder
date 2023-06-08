// ABC277 - D
// 20%
// 2nd
// OK


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
    int N, M; cin >> N >> M;
    ll total = 0, maxim = 0;
    set<int> A;
    map<int,ll> mp;
    rep(i,N) {
        int temp; cin >> temp;
        mp[temp] += temp;
        mp[temp+M] += temp;
        total += temp;
    }
    
    for(auto&& [sig, val] : mp) {
        mp[sig] += mp[sig-1];
        maxim = max<ll>(maxim, mp[sig]);
    }
    if(maxim>total) maxim = total;
    cout << total - maxim << endl;
    
    
    return 0;
    
}