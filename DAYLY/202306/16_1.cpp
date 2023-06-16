// ABC160 - D
// 19%
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
    int N, X, Y; cin >> N >> X >> Y;
    map<int, int> mp;
    map<pair<int, int>, int> check;
    for(int i = 1; i <= N; i++) for(int j = 1; j <= N; j++) {
        if(i == j || check[{i,j}] == 1 ) continue;
        mp[min<int>(abs(i-j), abs(i-X) + abs(Y-j) + 1)]++;
        check[{j,i}]++;
    }
    
    
    rep(i,N-1) cout << mp[i+1] << endl;
    
    return 0;
    
}