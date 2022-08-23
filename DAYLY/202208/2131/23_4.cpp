// ATC001 - A
// DIRECT
// rnd
// LITTLE_COPYED


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

int H, W, ans = 0;
vector<vector<char>> c(500,vector<char>(500));
vector<vector<char>> rem(500,vector<char>(500,0));

void dfs(int nowh, int noww, int befh = -1, int befw = -1) {
    
    if(rem[nowh][noww]) return;
    rem[nowh][noww] = 1;
    if(ans) return;

    if(c[nowh][noww] == 'g') {
        ans = 1;
        return;
    }

    if(nowh < H-1 && nowh+1 != befh && c[nowh+1][noww] != '#') {
        dfs(nowh+1,noww,nowh,noww);
    }
    if(noww < W-1 && noww+1 != befw && c[nowh][noww+1] != '#') {
        dfs(nowh,noww+1,nowh,noww);
    }
    if(nowh > 0 && nowh-1 != befh && c[nowh-1][noww] != '#') {
        dfs(nowh-1,noww,nowh,noww);
    }
    if(noww > 0 && noww-1 != befw && c[nowh][noww-1] != '#') {
        dfs(nowh,noww-1,nowh,noww);
    }
    return;
}



int main() {
    cin >> H >> W;
    int sth, stw;
    rep(i,H) rep(j,W) {
        cin >> c[i][j];
        if(c[i][j] == 's') {
            sth = i;
            stw = j;
        }
    }
    
    dfs(sth,stw);
    if(ans) coutd("Yes");
    else coutd("No");
    return 0;
    
}

