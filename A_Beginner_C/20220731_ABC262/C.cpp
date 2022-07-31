// ABC262 - C
// REALTIME
// rnd
// NOT_YET

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


// -----     cpp_snippets_v5     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)

#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(X)             if(DEBUGGING) { X }

#define INF                     1e18
#define ll                      long long int


#define DEBUGGING 0

using namespace std;

int main() {
    int N, ready = 0; cin >> N;
    ll ans = 0;
    vector<int> a(N); vrep(a) cin >> x;
    rep(i,N) {
        if (a[i] == i+1) {
            ready++;
        } else if(a[a[i]-1] == i+1) {
            ans++;
            dcoutd("!!");
        }
        
    }
    int readyans = 0;
    for(int i = ready - 1; i >= 1; i--) readyans += i;
    coutd(ans/2+readyans);
    
    return 0;
    
}