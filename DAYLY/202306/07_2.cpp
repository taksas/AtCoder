// AAA000 - Q
// DIFF
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

ll comb(int n1, int n2);

int main() {
    int N; cin >> N;
    vector<int> a(N); vrep(a) cin >> x;
    
    sort(a.rbegin(), a.rend());
    double target = a[0]/2.0;


    int search = a[1], whi = 1;
    while(search > target) search = a[++whi];
    if(whi != 1 && target-a[whi] > a[whi-1]-target) search = a[whi-1];
    cout << a[0] << " " << search << endl;

    
    
    return 0;
    
}


