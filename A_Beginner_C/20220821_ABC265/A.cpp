// ABC265 - A
// REALTIME
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
    double X, Y ,N; cin >> X >> Y >> N;
    int ans = 0;
    if(Y/3 < X ) {
        while(1) {
            if(N-3 >= 0) {
                N -= 3;
                ans += Y;
            } else {
                break;
            }
        }
        rep(i,N) ans += X;
    } else {
        rep(i,N) ans += X;
    }
    
    coutd(ans);
    
    return 0;
    
}