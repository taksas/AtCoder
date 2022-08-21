// ABC079 - C
// 48%
// rnd
// SHOULD?


// -----     cpp_snippets_v8     -----
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


#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define coutds(N,X)            cout << setprecision(N) << X << endl
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
    int N; cin >> N;
    int thousand = N/1000, hundred = N/100%10, ten = N/10%10, one = N%10;
    
    int ansset[3] = {-1};
    int check = 0;
    rep(i,2) {
        rep(j,2) {
            rep(k,2) {
                int ans = thousand;
                
                if(!i) ans += hundred;
                else ans -= hundred;

                if(!j) ans += ten;
                else ans -= ten;

                if(!k) ans += one;
                else ans -= one;
                if(ans == 7) {
                    check = 1;
                    ansset[0] = i;
                    ansset[1] = j;
                    ansset[2] = k;
                }
                if(check) break;
            }
            if(check) break;
        }
        if(check) break;
    }
    
    cout << thousand;
    if(ansset[0]) cout << "-";
    else cout << "+";
    cout << hundred;
    if(ansset[1]) cout << "-";
    else cout << "+";
    cout << ten;
    if(ansset[2]) cout << "-";
    else cout << "+";
    cout << one << "=7" << endl;
    return 0;
    
}