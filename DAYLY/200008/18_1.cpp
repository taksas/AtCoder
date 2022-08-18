// ARC004 - A
// 48%
// rnd
// YAY_FAST!!

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


// -----     cpp_snippets_v7.1     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())


#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(Y)             if(DEBUGGING) ( Y )

#define INF                     1e18
#define ll                      long long int


#define DEBUGGING 1

using namespace std;

int main() {
    int N; cin >> N;
    vpii(XY);
    rep(i,N) {
        int t1, t2; cin >> t1 >> t2;
        XY.push_back( {t1, t2} );
    }
    int ans = 0, ansnum1, ansnum2;
    rep(i,N) rep(j,N) {
        int x = max(XY[i].first,XY[j].first)-min(XY[i].first,XY[j].first);
        x *= x;
        int y = max(XY[i].second,XY[j].second)-min(XY[i].second,XY[j].second);
        y *= y;
        if(x+y > ans) {
            ans = x + y;
            ansnum1 = i;
            ansnum2 = j;
        }
    }
    int x = max(XY[ansnum1].first,XY[ansnum2].first)-min(XY[ansnum1].first,XY[ansnum2].first);
    x *= x;
    int y = max(XY[ansnum1].second,XY[ansnum2].second)-min(XY[ansnum1].second,XY[ansnum2].second);
    y *= y;
    coutd(sqrt(x+y));
    
    return 0;
    
}