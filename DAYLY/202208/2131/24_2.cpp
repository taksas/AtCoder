// ABC258 - D
// 21%
// rnd
// SHOULD?


// -----     cpp_snippets_v8.4.1     -----
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

#define INF                     8e18
#define ll                      long long int


using namespace std;

ll ans = INF;
int N, X;
vector<pair<ll,int>> game;

void dfs(int depth, ll canmax, ll skipmin, ll nowans) {


    chmin(ans,nowans + skipmin*(X-depth));

    if(nowans < ans && canmax < N && depth <= X+1) {
        nowans += game[canmax].first;
        chmin(skipmin,(ll)(game[canmax].second));
        dfs(depth+1,canmax+1,skipmin,nowans);
    }
    return;
    
}


int main() {
    cin >> N >> X;
    game.resize(N);
    rep(i,N) {
        int te1, te2; cin >> te1 >> te2;
        game[i].first = te1+te2;
        game[i].second = te2;
    }
    dfs(1,1,game[0].second,game[0].first);
    coutd(ans);
    return 0;
    
}