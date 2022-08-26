// AAA000 - Q
// ASAKATSU_GRAY
// rnd
// SHOULD?


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
#include <cstdlib>

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
    string S; cin >> S;
    transform(S.begin(), S.end(), S.begin(), ::tolower);
    char sel[3] = {'i','c','t'};
    int ans = 0;
    rep(i,S.length()) {
        char temp = S[i];
        if(temp == sel[ans]) ans++;
        if(ans == 3) break;
    }
    
    if(ans == 3) coutd("YES");
    else coutd("NO");
    
    return 0;
    
}