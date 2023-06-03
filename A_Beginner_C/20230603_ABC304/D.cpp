// ABC304 - D
// REALTIME
// rnd
// NOT_YET


// -----     cpp_snippets_v8.6     -----
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
#define vpii(X)                 vector<pair<int, int>> X

#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max<int>(X1, X2)
#define chmin(X1, X2)           X1 = min<int>(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18
#define ll                      long long int


using namespace std;
using namespace atcoder;


int main() {
    int W, H, N; cin >> W >> H >> N;
    vector<pair<int,int>> PQ(N); rep(i,N) cin >> PQ[i].first >> PQ[i].second;
    int A; cin >> A;
    vector<int> a(A); rep(i,A) cin >> a[i];
    int B; cin >> B;
    vector<int> b(B); rep(i,B) cin >> b[i];

    vector<string> signature(N);
    vector<int> siga(A+1), sigb(B+1);
    rep(i,N) {
        rep(j,A) {
            if(PQ[i].first < a[j]) {
                signature[i] += '-';
                if(j > 0 && PQ[i].first > a[j-1]) siga[j] = 1;
                else if (j == 0) siga[j] = 1;
            }
            else {
                signature[i] += '+';
            }
        }
        rep(j,B) {
            if(PQ[i].second < b[j]) {
                signature[i] += '-';
                if(j > 0 && PQ[i].second > b[j-1]) sigb[j] = 1;
                else if (j == 0) sigb[j] = 1;
            }
            else {
                signature[i] += '+';
            }
        }
    }

    rep(i,N) {
        if(PQ[i].first > a[A-1]) siga[A] = 1;
        if(PQ[i].second > b[B-1]) sigb[B] = 1;
    }



    int maxim = -20000000, minimal = 20000000;
    rep(i,A+1) rep(j,B+1) {
        if(siga[i] == 0 || sigb[j] == 0) {
            minimal = 0;
            break;
        }
    }
    dsu d(N);
    rep(i,N) rep(j,N) {
        if(i==j) continue;
        if(signature[i] == signature[j]) d.merge(i,j);
    }
    
    vector<vector<int>> dgu = d.groups();

    
    rep(i, dgu.size()) {
        maxim = max<int>(dgu[i].size(), maxim);
        minimal = min<int>(dgu[i].size(), minimal);
        //if(dgu[i].size() < minimal) minimal = dgu[i].size();
        //if(dgu[i].size() > maxim) maxim = dgu[i].size();
        
    }

    cout << minimal << " " << maxim << endl;
    return 0;
    
}