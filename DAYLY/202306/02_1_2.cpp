// ABC222 - D
// DIFF
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


int N;
vector<pair<int, int>> mp;
ll ans = 0;

void calc(int i, int num);
ll bi_k(int n1);

int main() {
    cin >> N;
    vector<int> A(N), B(N); rep(i,N) cin >> A[i]; rep(i,N) cin >> B[i];
    rep(i,N) mp.push_back({A[i], B[i]});
    
    
    for(int i = mp[0].first; i <= mp[0].second; i++) {
        calc(1, i);
    }

    //rep(i,N-1) {
    //    ans *= ((mp[i].second - mp[i].first + 1) * (mp[i+1].second - mp[i+1].first + 1)) - bi_k(mp[i].second - mp[i+1].first);
    //}
    
    cout << ans << endl;
    return 0;
    
}



void calc(int io, int num) {
    if(io == N) {
        ans++;
        if(ans == 998244353) ans = 0;
        return;
    }


    for(int i = max<int>(num, mp[io].first); i <= mp[io].second; i++) {
        calc(io+1, i);
    }

}

ll bi_k(int n1) {
    if(n1 <= 0) return 0;
    ll ans = 0;
    for(int i = 1; i <= n1; i++) ans += i;
    return ans;
}