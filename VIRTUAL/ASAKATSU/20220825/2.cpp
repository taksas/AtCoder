// AGC041 - A
// ASAKATSU
// rnd
// NOT_YET


// -----     cpp_snippets_v8.4.1     -----
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

#define INF                     8e18
#define ll                      long long int


using namespace std;

int main() {
    ll N, A, B; cin >> N >> A >> B;
    ll ans = INF;
    chmin(ans,B-1);
    chmin(ans,N-A);
    chmin(ans,)
    if((B-A-1)%2 == 0) coutd(min(B-1,N-A));
    else coutd(B-A-1);
    
    
    return 0;
    
}