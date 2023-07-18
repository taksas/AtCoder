// ABC310 - D
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

int N, T, M;
vector<map<int,int>> AB;
int ans = 0;

void dfs(int n, vector<vector<int>> team);


int main() {
    cin >> N >> T >> M;
    vector<map<int,int>> ABt(N+1);
    
    rep(i,0,M) {
        int a, b; cin >> a >> b;
        ABt[a][b] = 1;
        ABt[b][a] = 1;
    }
    AB = ABt;
    vector<vector<int>> teams(T);
    dfs(1, teams);
    cout << ans << endl;
    return 0;
    
}


void dfs(int n, vector<vector<int>> team) {
    if(n == N+1) {
        ans++;
        return;
    } 
    vector<vector<int>> teamt = team;
    rep(i,0,T) {
        bool ok = true;
        rep(j,0,team[i].size()) {
            if(AB[n][team[i][j]] == 1) {
                ok = false;
                break;
            }
        }
        if(ok) {
            team[i].push_back(n);
            dfs(n+1, team);
        }
        
        team = teamt;
    }
}