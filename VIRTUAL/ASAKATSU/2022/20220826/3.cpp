// AAA000 - Q
// ASAKATSU_BROWN
// rnd
// SHOULD?


// -----     cpp_snippets_v8.4.2     -----
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
    int N, M, L; cin >> N >> M >> L;
    int pqr[3]; rep(i,3) cin >> pqr[i];
    
    int ans = 0;
    int sel[6][3] = {{0,1,2},{0,2,1},{1,2,0},{1,0,2},{2,0,1},{2,1,0}};
    
    rep(i,6) {
        int te1 = pqr[sel[i][0]], te2 = pqr[sel[i][1]], te3 = pqr[sel[i][2]];
        if(te1 <= N && te2 <= M && te3 <= L) chmax(ans,(N/te1)*(M/te2)*(L/te3));
    }
    coutd(ans);
    
    return 0;
    
}