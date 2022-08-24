// ABC165 - C
// From_ASAKATSU_RERUN
// rnd
// SHOULD?


// -----     cpp_snippets_v8.4     -----
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <ctime>
#include <functional>
#include <stack>
#include <queue>
#include <tuple>
#include <cassert>
#include <bitset>
#include <iomanip>
#include <sstream>
#include <unordered_set>

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     1e18
#define ll                      long long int


using namespace std;

int N, M, Q, a[50], b[50], c[50], d[50];
ll ans = 0;

void dfs(int now, int nowdepth, vector<int>& sel) {
    
    if(nowdepth == N) {
        ll temp = 0;
        rep(i,Q) {
            if(sel[b[i]-1] - sel[a[i]-1] == c[i]) temp += d[i];
        } 
        chmax(ans,temp);
        return;
    }
    
    
    sel[nowdepth] = now;
    if(now <= M) dfs(now,nowdepth+1,sel);
    if(now+1 <= M) dfs(now+1,nowdepth,sel);
    return;
}

int main() {
    cin >> N >> M >> Q;
    rep(i,Q) cin >> a[i] >> b[i] >> c[i] >> d[i];
    vector<int> sel(N);
    dfs(1,0,sel);
    coutd(ans);
    
    return 0;
    
}