// nikkei2019-qual - C
// From_ASAKATSU
// rnd
// NOT_YET


// -----     cpp_snippets_v8.4     -----
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
#include <unordered_set>

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
    multiset<pair<int,int>> tot;
    vector<pair<int,int>> ab;
    rep(i,N) {
        int te1, te2; cin >> te1 >> te2;
        ab.push_back({te1,te2});
        tot.insert({te1+te2,i});
    }
    auto itr = tot.end();
    ll ans1 = 0, ans2 = 0;
    int po = 1;
    rep(i,N) {
        itr--;
        if(po) {
            ans1 += ab[(*itr).second].first;
            po = 0;
        } else {
            ans2 += ab[(*itr).second].second;
            po = 1;
        }
        
    }
    coutd(ans1-ans2);
    
    return 0;
    
}