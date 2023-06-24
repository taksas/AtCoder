// ABC307 - B
// REALTIME
// rnd
// SHOULD?


// -----     cpp_snippets_v8.10     -----
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
#define ull                     unsigned long long int

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define nextP(X)                next_permutation(X.begin(), X.end())

using namespace std;
using namespace atcoder;
using mint = modint998244353;

bool kaibun_check(string s);

int main() {
    int N; cin >> N;
    vector<string> S(N); vrep(S) cin >> x;
    
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) {
        if(i==j) continue;
        string temp = S[i]+S[j];
        if(kaibun_check(temp)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    
    return 0;
    
}



bool kaibun_check(string s) {
    int sl = s.length();
    bool ok = true;
    for(int i = 0; i < sl/2; i++) {
        if(s[i] != s[sl-1-i]) {
            ok = false;
            break;
        }
    }
    return ok;
}