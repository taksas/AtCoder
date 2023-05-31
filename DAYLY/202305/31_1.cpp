// ABC189 - C
// 50%
// rnd
// YAY!!


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
    int N; cin >> N;
    vector<int> A(N); rep(i,N) cin >> A[i];
    
    ll ans = -1;
    rep(i,N) {
        ans = max<ll>(ans, A[i]);
        int minimal = A[i];
        int count = 1;
        for(int j = i+1; j < N; j++) {
            if(minimal != min<int>(minimal, A[j])) {
                minimal = A[j];
            }
            ans = max<ll>(ans, ++count * minimal);
            
        }
    }
    
    
    
    cout << ans << endl;
    return 0;
    
}