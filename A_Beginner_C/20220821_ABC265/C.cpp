// ABC265 - C
// REALTIME
// rnd
// SHOULD?


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

int main() {
    int H, W; cin >> H >> W;
    vector<vector<char>> G(H,vector<char>(W)); rep(i,H) rep(j,W) cin >> G[i][j];
    int x = 0, y = 0;
    map<pair<int,int>,int> mp;
    while(1) {
        if(G[x][y] == 'U' && x != 0) {
            x -= 1;
        } else if(G[x][y] == 'D' && x != H-1) {
            x += 1;
        } else if(G[x][y] == 'L' && y != 0) {
            y -= 1;
        } else if(G[x][y] == 'R' && y != W-1) {
            y += 1;
        } else {
            coutd(x+1 << " " << y+1);
            return 0;
        }
        mp[{x,y}]++;
        if(mp[{x,y}] == 2) {
            coutd("-1");
            return 0;
        }
    }
    
    
    return 0;
    
}