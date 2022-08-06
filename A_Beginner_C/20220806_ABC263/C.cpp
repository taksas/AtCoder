// ABC263 - C
// REALTIME
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

int N, M;
vector<int> vec;

void gogo(int select) {
    vec[select]++;
    int temp = 1;
    for(int i = 0; i < N-1; i++) {
        if(vec[i] == vec[i+1] && vec[i] > vec[i+1]) temp = 0;
        
    }
    if(temp) {
        vrep(vec) cout << x << " ";
        cout << endl;
    }
    
}

int main() {
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        vec.push_back( i );
    }
vrep(vec) cout << x << " ";
        cout << endl;
    for(int i = N; i >= 0; i--) {
        for(int j = N-i; j >= 0; j--) {
            for(int j1 = 0; j1 < M-N; j1++) {
                gogo(j);
            }
        }
    }
    
    
    
    
    return 0;
    
}