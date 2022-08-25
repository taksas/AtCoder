// ABC247 - D
// ASAKATSU
// rnd
// NOT_YET


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

int main() {
    int Q; cin >> Q;
    unordered_multiset<pair<ll,ll>> TSU;
    rep(i,Q) {
        int sel; cin >> sel;
        if(sel == 1) {
            int x,c; cin >> x >> c;
            TSU.insert({x*c,x});
        } else {
            int c; cin >> c;
            ll ans = 0;
            
            while(1) {
                auto itr = TSU.begin();
                if((*itr).second >= c) {
                    ans += c*(*itr).second;
                    if((*itr).first/(*itr).second != c) TSU[0] = {(*itr).first- (c*(*itr).second), c};
                    else TSU.erase(itr);
                    break;
                } else {
                    c -= (*itr).first/(*itr).second;
                    ans += (*itr).first;
                    TSU.erase(itr);
                }
            }
            coutd(ans);
        }
    }
    
    
    
    return 0;
    
}