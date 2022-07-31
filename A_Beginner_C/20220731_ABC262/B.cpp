// ABC262 - B
// DIFF
// rnd
// SHOULD?
 
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
 
 
// -----     cpp_snippets_v5     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)
 
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X
 
#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
 
#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(X)             if(DEBUGGING) { X }
 
#define INF                     1e18
#define ll                      long long int
 
 
#define DEBUGGING 1
 
using namespace std;
 
int main() {
    int N, M, ans = 0; cin >> N >> M;
    vpii(UV(M));
    map<int,int> mp;
    
    rep(i,M) {
        int temp1, temp2; cin >> temp1 >> temp2;
        UV[i].first = temp1;
        UV[i].second = temp2;
        mp[temp2]++;
        if(mp[temp2] == 2) {
            ans++;
            mp[temp2] = 0;
        }
    }
    coutd(ans);
    
    
    return 0;
    
}