// ARC039 - A
// From_ASAKATSU
// rnd
// WANTTOGET_INPUT


// -----     cpp_snippets_v8.1.1     -----
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
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
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

    #define A100 A + 900 - A/100*100
    #define A200 A + 900 - A/100*100 - 100
    #define A10 A + (90 - (A%100-A%10))
    #define A20 A + (90 - (A%100-A%10)) - 10
    #define A1 A + (9 - A%10)
    #define A2 A + (9 - A%10) - 1

    #define B100 B-(B/100*100)+100
    #define B10 B-(B%100-B%10)
    #define B1 B-B%10
    #define B200 B-(B/100*100)+100 +100
    #define B20 B-(B%100-B%10) +10
    #define B2 B-B%10 +1


    int ans = -2147483647;
    chmax(ans, A-B);
    
    chmax(ans, (A100)-B);
    chmax(ans, (A10)-B);
    chmax(ans, (A1)-B);

    chmax(ans, A-(B100));
    chmax(ans, A-(B10));
    chmax(ans, A-(B1));

    chmax(ans, (A200)-B);
    chmax(ans, (A20)-B);
    chmax(ans, (A2)-B);

    chmax(ans, A-(B200));
    chmax(ans, A-(B20));
    chmax(ans, A-(B2));


    coutd(ans);

    
    return 0;
    
}