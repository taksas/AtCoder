// ABC095 - C
// ASAKATSU
// rnd
// SHOULD?

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


// -----     cpp_snippets_v6     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)

#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(X)             if(DEBUGGING) { X }

#define INF                     1e18
#define ll                      long long int


#define DEBUGGING 1

using namespace std;

int main() {
    int A,B,C,X,Y; cin>>A>>B>>C>>X>>Y;
    ll ans1 = 0, ans2 = 0, ans3 = 0;
    ans1 += C*(max(X,Y) * 2);

    ans2 += C*(min(X,Y) * 2);
    if(X>=Y) ans2 += A * abs(X-Y);
    else ans2 += B * abs(X-Y);

    ans3 += A*X + B*Y;
    
    chmin(ans1,ans2);
    coutd(min(ans1,ans3));
    return 0;
    
}