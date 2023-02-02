// AAA000 - Q
// ASAKATSU_GREEN
// rnd
// PENDED


// -----     cpp_snippets_v8.4.2     -----
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

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18
#define ll                      long long int


using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int open = 0, close = 0;
    rep(i,s.length()) {
        char temp = s[i];
        char temp1 = '0';
        if (i < s.length()-1) temp1 = s[i+1];
        if(temp == '(') open++;
        else close++;
        if(temp == '(' && temp1 == ')' && i != s.length()-1) {
            int it = i;
            for(int j = i+1; j < n; j++) {
                if(!open) break;
                char temp2 = s[j];
                if(temp2 == ')') open--;
                it++;
            }
            i = it;
            continue;
        }
        
        
        
    }
    rep(i,close) cout << '(';
    cout << s;
    rep(i,open) cout << ')';
    cout << endl;
    
    
    return 0;
    
}