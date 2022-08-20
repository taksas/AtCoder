// ARC039 - A
// ASAKATSU
// rnd
// NOT_YET


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
    int A, B; cin >> A >> B;
    coutd((10-((A-900)/10))*10);
    coutd(10-(A-990));
    coutd((((B-100)/10)-1)*10);
    coutd(B-110);
    int go = 900 - (A - (A%100));
    if(!go) {
        go = (10-((A-900)/10))*10;
        if(!go) {
            go = 10-(A-990);
        }
    }
    int maxi = A+go-B;
    int go2 = ((B/100)-1)* 100;
    if(!go2) {
        go2 = (((B-100)/10)-1)*10;
        if(!go2) {
            go2 = B-110;
        }
    }
    chmax(maxi, A-(B-go2));
    chmax(maxi, A-B);
    coutd(maxi);
    return 0;
    
}