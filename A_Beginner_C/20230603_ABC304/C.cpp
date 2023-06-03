// ABC304 - C
// REALTIME
// rnd
// SHOULD?


// -----     cpp_snippets_v8.6     -----
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
#define vpii(X)                 vector<pair<int, int>> X

#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max<int>(X1, X2)
#define chmin(X1, X2)           X1 = min<int>(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18
#define ll                      long long int


using namespace std;
using namespace atcoder;


int main() {
    int N, D; cin >> N >> D;
    vector<pair<int,int>> XY(N);

    dsu d(N);

    rep(i,N) {
        cin >> XY[i].first >> XY[i].second;
    }
    
    rep(i,N) rep(j,N) {
        if(i==j) continue;
        if(sqrt(abs(XY[i].first-XY[j].first)*abs(XY[i].first-XY[j].first) + abs(XY[i].second-XY[j].second)*abs(XY[i].second-XY[j].second)) <= D) {
            d.merge(i, j);
        }
    }
    
    rep(i,N) {
        if(d.same(0,i)) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    
    return 0;
    
}