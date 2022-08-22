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
    int N, M, Q; cin >> N >> M >> Q;
    vector<pair<int,pair<int,pair<int,int>>>> A;
    vector<int> ans(N,0);
    rep(i,Q) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        A.push_back({d,{c,{a,b}}});
    }
    sort(A.rbegin(),A.rend());

    ll truans = 0;
    rep(i,Q) {
        if(ans[A[i].second.second.second-1] == 0 && ans[A[i].second.second.first-1] == 0) {
            int ini = 1;
            while(1) {
                if(find(ans.begin(),ans.end(),ini) == ans.end()) break;
                ini++;
            }
            ans[A[i].second.second.second-1] = A[i].second.first + ini;
            ans[A[i].second.second.first-1] = ini;
        }
        if(ans[A[i].second.second.second-1] - ans[A[i].second.second.first-1] == A[i].second.first) truans += A[i].first;
    }
    coutd(truans);
    return 0;
    
}