// ABC246 - C
// 48%
// rnd
// CPYD

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


// -----     cpp_snippets_v7.1     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())


#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(Y)             if(DEBUGGING) ( Y )

#define INF                     1e18
#define ll                      long long int


#define DEBUGGING 0

using namespace std;

int main() {
    int N, K, X; cin >> N >> K >> X;
    vector<int> A(N); vrep(A) cin >> x;
    rep(i,N) {
        while(K>0) {
            A[i] -= X;
            if(A[i]<0) {
                A[i] += X;
                break;
            }
            K--;
        }
    }
    sort(bgen(A));
    
    for(int i = N-1; i >= 0; i--) {
        if(K <= 0) break;
        A[i] = 0;
        K--;
    }
    ll ans = 0;
    rep(i,N) {
        ans += A[i];
    }

    coutd(ans);
    
    
    return 0;
    
}