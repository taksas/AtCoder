// nikkei2019-2-qual - B
// 21%
// rnd
// NOT_YET


// -----     cpp_snippets_v8.9     -----
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

#define MAXINT                  2147483647
#define MININT                  -2147483648
#define MAXLL                   9223372036854775807
#define MINLL                   -9223372036854775808
#define INFI                    (INT_MAX / 2)
#define INFL                    (1LL << 60)
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
    int N; cin >> N;
    set<int> st; map<int, int> mp;
    vector<int> X;
    rep(i,N) {
        int temp; cin >> temp;
        st.insert(temp);
        mp[temp]++;
    }
    
    auto itr = st.begin();
    
    while(itr != st.end()) {
        auto tmp = itr;
        itr++;
        auto itrp =itr;
        itr = tmp;
        if(mp[*itr] == 1) {
            itr++;
            continue;
        }
        rep(i,mp[*itrp]) X.push_back(mp[*itr]);
        itr++;
    }
    mint ans = 1;
    rep(i,X.size()) ans *= X[i];
    if(X.size() == 0) ans = 0;
    cout << ans.val() << endl;
    return 0;
    
}