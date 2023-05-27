// ABC303 - D
// REALTIME
// rnd
// NOT_YET


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



string S;
int x, y, z;
int minxy;
ll ans = INF;
map<pair<pair<int,int>,pair<int,int>>, ll>  mp;

void dfs(int target_depth, int now_depth, int lamp_status, ll count, vector<pair<pair<int,int>,pair<int,int>>> path); 

int main() {
    cin >> x >> y >> z;
    cin >> S;
    
    if(x < y) minxy = x;
    else minxy = y;

    int lamp = 0;
    
    vector<pair<pair<int,int>,pair<int,int>>> path;
    dfs(S.length(), 0, 0, 0, path);
    
    cout << ans << endl;
    return 0;
    
}
// nowdepth, A or a, lamp on off, x or y

void dfs(int target_depth, int now_depth, int lamp_status, ll count, vector<pair<pair<int,int>,pair<int,int>>> path) {
    if(count + minxy*(target_depth-now_depth)>= ans) return;
    if(target_depth == now_depth) {
        if(count < ans) ans = count;
        rep(i,target_depth) {
            ll tempmp = mp[{{path[i].first.first,path[i].first.second}, {path[i].second.first, path[i].second.second}}];
            if(tempmp == 0 || tempmp > count) {
                mp[{{path[i].first.first,path[i].first.second}, {path[i].second.first, path[i].second.second}}] = count;
            }
        }
        return;
    }

    char temp = S[now_depth];

    if(temp == 'A') {
        if(lamp_status == 1) {
            path.push_back({{now_depth,1}, {1, 1}});
            if(mp[{{now_depth,1}, {1, 1}}] == 0 || mp[{{now_depth,1}, {1, 1}}] > count+x ) dfs(target_depth, now_depth+1, 1, count+x, path);
            else return;

            path.pop_back();
            path.push_back({{now_depth,1}, {1, 0}});
            dfs(target_depth, now_depth+1, 0, count+y+z, path);
        } else {
            path.push_back({{now_depth,1}, {0, 1}});
            if(mp[{{now_depth,1}, {0, 1}}] == 0 || mp[{{now_depth,1}, {0, 1}}] > count+x+z) dfs(target_depth, now_depth+1, 1, count+x+z, path);
            else return;

            path.pop_back();
            path.push_back({{now_depth,1}, {0, 0}});
            dfs(target_depth, now_depth+1, 0, count+y, path);
        }
    } else {
        if(lamp_status == 1) {
            path.push_back({{now_depth,0}, {1, 1}});
            if(mp[{{now_depth,0}, {1, 1}}] == 0 || mp[{{now_depth,0}, {1, 1}}] > count+x+z) dfs(target_depth, now_depth+1, 0, count+x+z, path);
            else return;

            path.pop_back();
            path.push_back({{now_depth,0}, {1, 0}});
            dfs(target_depth, now_depth+1, 1, count+y, path);
        } else {
            path.push_back({{now_depth,0}, {0, 1}});
            if(mp[{{now_depth,0}, {0, 1}}] == 0 || mp[{{now_depth,0}, {0, 1}}] > count+x) dfs(target_depth, now_depth+1, 0, count+x, path);
            else return;

            path.pop_back();
            path.push_back({{now_depth,0}, {0, 0}});
            dfs(target_depth, now_depth+1, 1, count+y+z, path);
        }
    }
}