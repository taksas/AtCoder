// ABC043 - B
// ASAKATSU
// rnd
// SHOULD?


// -----     cpp_snippets_v8.3     -----
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
#include <sstream>

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     1e18
#define ll                      long long int


using namespace std;

int main() {
    string s; cin >> s;
    string sim = "";
    rep(i,s.length()) {
        char temp = s[i];
        if(temp == '0') {
            sim += "0";
        } else if(temp == '1') {
            sim += "1";
        } else if(sim.length()){
            string exch = "";
            rep(j,sim.length()-1) {
                char temp1 = sim[j];
                exch += temp1;
            }
            sim = exch;
        } else {
            continue;
        }

    }
    coutd(sim);
    return 0;
    
}