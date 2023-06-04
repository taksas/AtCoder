// ABC130 - D
// 21%
// rnd
// SHOULD?


// -----     cpp_snippets_v8.7     -----
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

#define INF                     8e18
#define ll                      long long int

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define nextP(X)                next_permutation(X.begin(), X.end())

using namespace std;
using namespace atcoder;
using mint = modint998244353;

int main() {
    int N;
    ll K;
    cin >> N >> K;
    vector<int> a(N); rep(i,N) cin >> a[i];
    
    int start = 0, end = 0; 
    ll ans = 0;
    ll calc = a[0];
    while(start < N) {
        if(calc < K) {
            if(end < N-1) {
                end++;
                calc += a[end];
            }
            else break;
        } else {
            ans += N-end;
            calc -= a[start];
            start++;
            while(calc > K) {
                calc -= a[end];
                end--;
            }
        }
    }
    cout << ans << endl;
    return 0;
    
}

