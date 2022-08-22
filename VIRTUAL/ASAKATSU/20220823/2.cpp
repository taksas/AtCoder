// AAA000 - Q
// ASAKATSU
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
    int N; cin >> N;
    //vector<pair<int,pair<int,int> >> txy;
    int xp = 0, yp = 0, tp = 0;
    rep(i,N) {
        int t, x, y; cin >> t >> x >> y;
        if((abs(xp-x)+abs(yp-y)-abs(tp-t))%2 == 0 && abs(tp-t) >= abs(xp-x)+abs(yp-y)) {
            xp = x, yp = y, tp = t;
            continue;
        } else {
            coutd("No");
            return 0;
        }
    }
    coutd("Yes");
    return 0;
    
}