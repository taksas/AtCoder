// ABC223 - C
// From_ASAKATSU
// rnd
// COPYED_DIFF


// -----     cpp_snippets_v8.1     -----
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
    int N; cin >> N;
    vector<double> A(N), B(N); rep(i,N) cin >> A[i] >> B[i];
    double ans = 0;

    int selL = 0, selR = N-1;
    double overL = 0, overR = 0;
    while(selL < selR) {
        double needtL = (A[selL]-overL) / B[selL];
        double needtR = (A[selR]-overR) / B[selR];
        if(needtL > needtR) {
            ans += B[selL] * needtR;
            overR = 0;
            overL += needtR * B[selL];
            selR--;
        } else {
            ans += B[selL] * needtL;
            overL = 0;
            overR += needtL * B[selR];
            selL++;
        }
    }

    ans += (A[selL]-overL-overR)/2.0;


    coutds(15,ans);
    
    
    return 0;
    
}