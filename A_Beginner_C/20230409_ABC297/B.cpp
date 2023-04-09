// ABC297 - B
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
    string S; cin >> S;
    int ans = 1;
    
    int x = -1, y, x1 = -1, y1, z;
    rep(i,S.length()) {
        char temp = S[i];
        if(temp == 'B') {
            if(x == -1) x = i+1;
            else y = i+1;
        } else if(temp == 'R') {
            if(x1 == -1) x1 = i+1;
            else y1 = i+1;
        } else if(temp == 'K') {
            z = i+1;
        }
    }
    if(x%2 == y%2) ans = 0;
    if(!(x1 < z && z < y1)) ans = 0;
    
    if(ans) cout << "Yes";
    else cout << "No";
    cout << endl;

    
    return 0;
    
}