// ABC068 - C
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

bool ans = false;
int N;
vector<vector<int>> bridge;
vector<bool> visited;

void calc(int now, int depth);

int main() {
    int M; cin >> N >> M;
    vector<vector<int>> bridge_temp(N+1);
    vector<bool> visited_temp(N+1, false);
    visited = visited_temp;
    
    rep(i,0,M) {
        int a, b; cin >> a >> b;
        bridge_temp[a].push_back(b);
        bridge_temp[b].push_back(a);
    }
    bridge = bridge_temp;

    calc(1, 0);

    cout << (ans?"POSSIBLE":"IMPOSSIBLE") << endl;
    
    return 0;
    
}

void calc(int now, int depth) {
    if(now == N && depth <= 2) {
        ans = true;
        return;
    } else if(depth > 2 || visited[now]) return;
    visited[now] = true;
    rep(i,0,bridge[now].size()) calc(bridge[now][i], depth+1);
}