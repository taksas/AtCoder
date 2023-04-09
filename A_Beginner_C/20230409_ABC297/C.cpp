// ABC297 - C
// REALTIME
// rnd
// SHOULD?


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
    int H, W; cin >> H >> W;
    vector<vector<char>> mp(H,vector<char>(W));
    rep(i,H) {
        string temp; cin >> temp;
        rep(j,W) {
            char temp1 = temp[j];
            mp[i][j] = temp1;
        }
    }
    
    rep(i,H) {
        rep(j,W-1) {
            if(mp[i][j] == 'T' && mp[i][j+1] == 'T') {
                mp[i][j] = 'P';
                mp[i][j+1] = 'C';
            }
        }
    }
    
    rep(i,H) {
        rep(j,W) {
            cout << mp[i][j];
        }
        cout << endl;
    }

    return 0;
    
}