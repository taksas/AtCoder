// ABC309 - A
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
    int A, B; cin >> A >> B;
    map<int,pair<int,int>> mp;
    mp[1] = {0,0}; mp[2] = {0,1}; mp[3] = {0,2};
    mp[4] = {1,0}; mp[5] = {1,1}; mp[6] = {1,2};
    mp[7] = {2,0}; mp[8] = {2,1}; mp[9] = {2,2};
    cout << (( abs(mp[B].first-mp[A].first) == 0) ?"Yes":"No") << endl;
    
    
    
    
    
    return 0;
    
}