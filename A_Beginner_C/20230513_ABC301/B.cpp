// ABC301 - B
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



#define rep(i,n)                for (int i = 0; i < n; i++)
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
    vector<int> A(N); rep(i,N) cin >> A[i];
    
    vector<int> ans;
    
    rep(i,N-1) {
        if(A[i] < A[i+1]) {
            ans.push_back(A[i]);
            if(A[i] +1 != A[i+1]) {
                int temp = A[i] + 1;
                while(temp != A[i+1]) {
                    ans.push_back(temp++);
                }
            }
        } else {
            ans.push_back(A[i]);
            if(A[i] -1 != A[i+1]) {
                int temp = A[i] - 1;
                while(temp != A[i+1]) {
                    ans.push_back(temp--);
                }
            }
        }
    }
    
    ans.push_back(A[N-1]);
    

    rep(i,ans.size()) cout << ans[i] << " ";
    cout << endl;
    return 0;
    
}