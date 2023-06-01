// ABC023 - B
// 49%
// rnd
// SHOULD?


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

bool checker(int order, int N, string S);

int main() {
    int N; cin >> N;
    string S; cin >> S;
    
    for(int i = 0; i <= N/2; i++) {
        if(checker(i,N,S)) continue;
        else {
            cout << -1 << endl;
            return 0;
        }
    }
    
    
    cout << N/2 << endl;
    return 0;
    
}


bool checker(int order, int N, string S) {
    int target = N/2;
    char temp1 = S[target-order], temp2 = S[target+order];

    if(order%3 == 0) {
        if(order == 0) {
            if(temp1 == 'b') return true;
        } else {
            if(temp1 == 'b' && temp2 == 'b') return true;
        }
    } else if(order%3 == 1) {
        if(temp1 == 'a' && temp2 == 'c') return true;
    } else {
        if(temp1 == 'c' && temp2 == 'a') return true;
    }

    return false;
}