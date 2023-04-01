// ABC240 - C
// 46%
// 2nd
// NoNeed


// -----     cpp_snippets_v8.5     -----
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



#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))

#define vpii(X)                 vector<pair<int, int>> X
#

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18
#define ll                      long long int


using namespace std;
using namespace atcoder;

int ans = 0;

void dfs(vector<pair<int,int>>, int, int, int, int);

map<pair<int,int>, int> checker;

int main() {
    int N, X; cin >> N >> X;
    vector<pair<int,int>> jump(N);
    
    rep(i,N) {
        cin >> jump[i].first >> jump[i].second;
    }
    
    dfs(jump, 0, 0, N, X);
    
    if(ans) cout << "Yes" << endl; 
    else cout << "No" << endl;

    return 0;
    
}


void dfs(vector<pair<int,int>> jump, int depth, int path, int N, int X) {
    if(path > X || checker[{depth,path}] || ans) return;
    if(depth == N) {
        if(path == X) ans = 1;
        return;
    }
    checker[{depth,path}]++;
    dfs(jump, depth+1, path+jump[depth].first, N, X);
    dfs(jump, depth+1, path+jump[depth].second, N, X);
}