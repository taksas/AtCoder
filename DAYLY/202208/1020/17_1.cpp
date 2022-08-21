// ABC183 - C
// 49%
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
#define ddefined(Y)             if(DEBUGGING) () Y )

#define INF                     1e18
#define ll                      long long int


#define DEBUGGING 1

using namespace std;

int main() {
    int truans = 0;
    int N, K; cin >> N >> K;
    vvii(T,N,N);
    rep(i,N) rep(j,N) {
        int temp; cin >> temp;
        T[i][j] = temp;
    }

    vector<int> C;
    for(int i = 2; i <= N; i++) {
        C.push_back(i);
    }
    do {
        ll ans = T[0][C[0]-1];
        for(int i = 0; i < N-2; i++) {
            ans += T[C[i]-1][C[i+1]-1];
        }
        ans += T[C[N-2]-1][0];
        if(ans==K) truans++;
    } while(nextP(C));
    coutd(truans);
    return 0;
    
}


