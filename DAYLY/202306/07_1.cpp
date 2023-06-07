// ABC235 - D
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

int reversal(int num);

int main() {
    
    ll a, N; cin >> a >> N;
    int limitation = min<int>(1000000, N*10);
    vector<int> visited(limitation, -1);
    queue<pair<int,int>> q; q.push({1, 0});

    while(!q.empty()) {
        ll target = q.front().first, num =q.front().second; q.pop();
        if(target*a < limitation && visited[target*a] == -1) {
            q.push({target*a, num+1});
            visited[target*a] = num+1;
        }
        int rv = reversal(target);
        if(rv != 0 && rv < limitation && visited[rv] == -1) {
            q.push({rv, num+1});
            visited[rv] = num+1;
        }
    }
    cout << visited[N] << endl;
    
    return 0;
    
}



int reversal(int num) {
    int zero = 1;
    while(num > zero) zero *= 10; 
    int fr = num%10;
    if(fr == 0 || num < 10) return 0;
    int numr = (fr*(zero/10))+(num/10);
    return numr;
}