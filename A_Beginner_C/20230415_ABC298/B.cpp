// ABC298 - B
// DIFF
// rnd
// SHOULD?


// -----     cpp_snippets_v8.5     -----
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <map>
#include <string>
#include <cmath>
#include <ctime>
#include <functional>
#include <stack>
#include <queue>
#include <deque>
#include <tuple>
#include <cassert>
#include <bitset>
#include <iomanip>
#include <sstream>



#include <atcoder/all>



#define rep(i,n)                for (int i = 1; i <= n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))

#define vpii(X)                 vector<pair<int, int>> X
#

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18
#define ll                      long long int


using namespace std;
using namespace atcoder;


int main() {
    int N; cin >> N;
    vector<vector<int>> A(N+1,vector<int>(N+1)); rep(i,N) rep(j,N) cin >> A[i][j];
    vector<vector<int>> B(N+1,vector<int>(N+1)); rep(i,N) rep(j,N) cin >> B[i][j];
    
    vector<vector<int>> temp(N+1,vector<int>(N+1));

    int ans = 1;
    rep(i,N) {
        rep(j,N) {
            if(A[i][j] == 1 && A[i][j] != B[i][j]) {
                ans = 0;
                break;
            }
        }
        if(!ans) break;
    }
    if(ans) {
        cout << "Yes" << endl;
        return 0;
    }

    
    rep(i2,3) {
        
        rep(j,N) rep(k,N) {
            temp[j][k] = A[N+1-k][j];
        }
        ans = 1;
        rep(i,N) {
            rep(j,N) {
                if(temp[i][j] == 1 && temp[i][j] != B[i][j]) {
                    ans = 0;
                    break;
                }
            }
            if(!ans) break;
        }
        if(ans) {
            cout << "Yes" << endl;
            return 0;
        }
        A = temp;
    }
    
    cout << "No" << endl;
    
    
    return 0;
    
}