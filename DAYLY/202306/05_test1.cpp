// AtCoderの Clang10.0.0 における 各 数値型 の 最大値最小値 を求める
// DIFF
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
    //int
    int intMin = -2147483648;
    cout << "intMin: " << intMin << endl;
    int intMax = 2147483647;
    cout << "intMax: " << intMax << endl;
    // Over Flow Check
    intMin--; intMax++;
    cout << "intMin: " << intMin << endl;
    cout << "intMax: " << intMax << endl;
    
    //ll
    ll llMin = -9223372036854775808;
    cout << "llMin: " << llMin << endl;
    ll llMax = 	9223372036854775807;
    cout << "llMax: " << llMax << endl;
    // Over Flow Check
    llMin--; llMax++;
    cout << "llMin: " << llMin << endl;
    cout << "llMax: " << llMax << endl;
    
    return 0;
    
}