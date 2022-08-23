// ABC265 - D
// RETRY
// rnd
// PENDED


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
    ll N, P, Q, R; cin >> N >> P >> Q >> R;
    set<ll> A;
    ll rsk; cin >> rsk;
    A.insert(rsk);
    for(int i = 1; i < N; i++) {
        int temp; cin >> temp;
        rsk += temp;
        A.insert(rsk);
    }
    
    auto itr = A.begin();
    rep(i,N+1) {
        if(A.count(*itr+P) && A.count(*itr+P+Q) && A.count(*itr+P+Q+R)) {
            coutd("Yes");
            return 0;
        }
    }
    

    coutd("No");
    return 0;
    
}