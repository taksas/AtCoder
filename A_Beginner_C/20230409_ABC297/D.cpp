// ABC297 - D
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
 
 
int main() {
    ll a, b; cin >> a >> b;
    vector<ll> mp;
    map<ll, int> check;
    if(a > b) {
        mp.push_back(a); mp.push_back(b);
    } else {
        mp.push_back(b); mp.push_back(a);
    }
    if(a == b) {
        cout << 0 << endl;
        return 0;
    }
    ll ans = 0;
    int temp = 3, go = 1;
    while(temp--) {
        ans++;
        auto itr = mp.begin();
        itr++;
        
        if(check[temp1]++) {
            go = 0;
            break;
        }
        
    }

    if(go) {
        while(1) {
            ans++;
            auto itrip1 = mp.end();
            itrip1--; itrip1--;
            auto itri = mp.end();
            itri--; itri--; itri--;
            ll temp = min(*itrip1 - *itri, *itri);
            mp.push_back(temp);
            if(check[temp]++) break;
        }
    }


    cout << ans << endl;
    
    
    
    return 0;
    
}