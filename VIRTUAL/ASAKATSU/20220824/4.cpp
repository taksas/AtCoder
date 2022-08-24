// AAA000 - Q
// ASAKATSU
// rnd
// SHOULD?


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
    multiset<int> akun, bsan;
    multimap<int,int> mp, pm;
    vector<pair<int,int>> sara;
    rep(i,N) {
        int te1,te2; cin >> te1 >> te2;
        sara.push_back({te1,te2});
        akun.insert(te1-te2);
        bsan.insert(te2-te1);
        mp.insert(make_pair(te1-te2,i));
        mp.insert(make_pair(te2-te1,i));
        pm.insert(make_pair(i,te1-te2));
        pm.insert(make_pair(i,te2-te1));

    }
    sort(akun.rbegin(),akun.rend());
    sort(bsan.rbegin(),bsan.rend());

    ll asouwa = 0, bsouwa = 0;
    rep(i,N) {
        auto itr1 = akun.end();
        asouwa += sara[*itr1].first;
        auto itr12 = bsan.find(pm[mp[*itr1]]);
        
        akun.erase(itr1);

    }
    
    
    return 0;
    
}