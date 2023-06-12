// sumitrust2019 - D
// 21%
// rnd
// SHOULD?


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
    string S; cin >> S; 
    map<int, vector<int>> mp;
    rep(i,N) {
        if(mp[S[i] - '0'].size() != 0) continue;
        for(int j = i+1; j < N; j++) {
            mp[S[i] - '0'].push_back(S[j] - '0');
        }
        
    }
    int ans = 0;
    int seed = 999;
    while(seed++ < 1999) {
        bool kill = true;
        rep(i,mp[seed/100%10].size()) {
            if(mp[seed/100%10][i] == seed/10%10) {
                for(int j = i+1; j < mp[seed/100%10].size(); j++) {
                    if(mp[seed/100%10][j] == seed%10) {
                        kill = false;
                        break;
                    }
                }
                break;
            }
        }
        if(kill) continue;
        ans++;
    }
    cout << ans << endl;
    return 0;
    
}

