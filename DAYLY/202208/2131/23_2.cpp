// ARC101 - C
// From_ASAKATSU
// rnd
// COPYED


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
    int N, K; cin >> N >> K;
    vector<int> pl, mi;

    rep(i,N) {
        int temp; cin >> temp;
        if(!temp) K--;
        else if(temp>0) pl.push_back(temp);
        else mi.push_back(-temp);
    }
    

    int plmxm = pl.size(), mimxm = mi.size();
    ll ans = INF;
    rep(i,plmxm) {
        int rev = K-i-2;
        if(rev<mimxm && rev>=0) chmin(ans, (ll)(pl[i] * 2 + mi[mimxm-rev-1]));
    }
    rep(i,mimxm) {
        int rev = K-i-2;
        if(rev<plmxm && rev>=0) chmin(ans, (ll)(mi[mimxm-i-1] * 2 + pl[rev]));
    }
    if(plmxm >=  K) chmin(ans, (ll)(pl[K-1] * 2));
    if(mimxm >=  K) chmin(ans, (ll)(mi[mimxm-K-2] * 2));

    coutd(ans);
    
    return 0;
    
}