// ABC296 - C
// CONTEST
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
    int N, X; cin >> N >> X;
    vector<int> all(N);
    int ans;
    if(X==0) ans = 1;
    else ans = 0;
    rep(i,N) {
        cin >> all[i];
    }

    set<int> search1;
    rep(i,N) {
        int temp= all[i];
        if(search1.find(temp) != search1.end()) {
            ans = 1;
        }
        search1.insert(X+temp);
    } 
    set<int> search2;
    for(int i = N-1; i >= 0; i--) {
        int temp= all[i];
        if(search2.find(temp) != search2.end()) {
            ans = 1;
        }
        search2.insert(X+temp);
    }
    
    if(ans) cout << "Yes";
    else cout << "No";
    cout << endl;
    
    
    
    return 0;
    
}