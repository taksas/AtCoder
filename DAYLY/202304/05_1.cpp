// ABC199 - C
// 50%
// 1st
// NOT_YET


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


string S;

void func1(int,int);
void func2();

int main() {
    int N; cin >> N;
    cin >> S;
    int Q; cin >> Q;
    rep(i,Q) {
        int t, a, b; cin >> t >> a >> b;
        if(t==1) func1(a,b);
        else func2();
    }
    
    cout << S << endl;
    
    
    return 0;
    
}




void func1(int a, int b) {
    char temp1 = S[a-1], temp2 = S[b-1];
    string rebuild = "";
    rep(i,S.length()) {
        if(i == a-1) {rebuild += temp2;}
        else if(i == b-1) {rebuild += temp1;}
        else {
            char temp = S[i];
            rebuild += temp;
        }
    }
    S = rebuild;
}


void func2() {
    string rebuild = "";
    for(int i = S.length()/2; i < S.length(); i++) {
        char temp = S[i];
        rebuild += temp;
    }
    for(int i = 0; i < S.length()/2; i++) {
        char temp = S[i];
        rebuild += temp;
    }
    S = rebuild;
}