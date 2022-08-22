// ABC159 - B
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
    string S; cin >> S;
    rep(i,S.length()/2) {
        char temp1 = S[i], temp2 = S[S.length()-1-i];
        if(temp1 != temp2) {
            coutd("No");
            return 0;
        }
    }
    string S2 = "";
    rep(i,(S.length()-1)/2) {
        char temp1 = S[i];
        S2 += temp1;
    }
    rep(i,S2.length()/2) {
        char temp1 = S2[i], temp2 = S2[S2.length()-1-i];
        if(temp1 != temp2) {
            coutd("No");
            return 0;
        }
    }
    string S3 = "";
    for(int i = (S.length()+3)/2-1; i < S.length(); i++) {
        char temp1 = S[i];
        S3 += temp1;
    }
    rep(i,S3.length()/2) {
        char temp1 = S3[i], temp2 = S3[S3.length()-1-i];
        if(temp1 != temp2) {
            coutd("No");
            return 0;
        }
    }
    
    coutd("Yes");
    
    return 0;
    
}