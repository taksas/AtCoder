// ABC151 - C
// 49%
// rnd
// INOUT_READ

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


#define DEBUGGING 1

using namespace std;

int main() {
    int N, M; cin >> N >> M;
    map<int,int> ac, wa;
    rep(i,M) {
        int temp; cin >> temp;
        string temps; cin >> temps;
        if(temps == "AC") {
            if(!ac[temp]) ac[temp]++;
        } else {
            if(!ac[temp]) wa[temp]++;
        }
    }
    int ansac = 0, answa = 0;
    for(int i = 1; i <= N; i++) {
        if(ac[i]) {
            ansac++;
            answa += wa[i];
        }
        
    }
    coutd(ansac << " " << answa);
    
    return 0;
    
}