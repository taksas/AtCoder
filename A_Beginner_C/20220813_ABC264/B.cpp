// ABC264 - B
// DIFF
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
    int R, C; cin >> R >> C;
    if (R >=9) R= 16 - R;
    if(R%2 != 0) {
        for(int i = 1; i <= R/2; i++) {
            if(C == 2*i || C == 16 - 2*i) {
                coutd("white");
                return 0;
            }
        }
        coutd("black");
        return 0;
    } else {
        for(int i = 0; i < R/2; i++) {
            if(C == 1 + i*2 || C == 16 - (1 + i*2)) {
                coutd("black");
                return 0;
            }
        }
        coutd("white");
        return 0;
    }
    
    
    return 0;
    
}