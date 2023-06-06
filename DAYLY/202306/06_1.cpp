// ABC193 - D
// 20%
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

map<string,int> scanned;
int calc(string str);

int main() {
    ll K; cin >> K;
    string S, T; cin >> S >> T;
    ll num[10] = {K, K, K, K, K, K, K, K, K, K};
    
    rep(i,4) {
        num[(S[i] - '0')]--;
        num[(T[i] - '0')]--;
    }

    

    ll won = 0;
    for(int i = 1; i <= 9; i++) for(int j = 1; j <= 9; j++) {
        S.back() = '0' + i;
        T.back() = '0' + j;
        if(calc(S) > calc(T)) {
            won += num[i] * (num[j] - (i==j));
        }
    }

    cout << won / (double)((9 * K - 8)*(9 * K - 9)) << endl;
    return 0;
    
}

int calc(string str) {
    if(scanned[str] != 0) return scanned[str];
    map<int, int> mp;
    rep(i,5) mp[str[i] - '0']++;

    int ret = 0;
    for(int i = 1; i <= 9; i++) {
        ret += i * pow(10, mp[i]);
    }
    scanned[str] = ret;
    return ret;
}