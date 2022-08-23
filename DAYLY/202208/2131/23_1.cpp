// ABC165 - C
// From_ASAKATSU
// rnd
// Full_COPYED


// -----     cpp_snippets_v8.3     -----
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


int N, M, Q, ans = 0, A[10], a[50], b[50], c[50], d[50];

void dfs(int cu = 0, int lst = 1) {
    if(cu == N) {
        int tot = 0;
        rep(i,Q) if(A[b[i]] - A[a[i]] == c[i]) tot += d[i];
        chmax(ans,tot);
        return;
    }

    for(int nxt = lst; nxt <= M; nxt++) {
        A[cu] = nxt;
        dfs(cu+1, nxt);
    }

}

int main() {
    cin >> N >> M >> Q;
    rep(i,Q) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        a[i]--; b[i]--;
    }
    dfs();
    coutd(ans);
    return 0;
    
}