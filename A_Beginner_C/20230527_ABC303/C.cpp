// ABC303 - C
// REALTIME
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
    int N, M, H, K; cin >> N >> M >> H >> K;
    string S; cin >> S;
    map<pair<int,int>,int> mp;
    rep(i,M) {
        int t1, t2; cin >> t1 >> t2;
        mp[{t1,t2}]++;
    }

    int x = 0, y = 0, health = H;
    rep(i,S.length()) {
        
        char temp = S[i];
        if(temp == 'R') x++;
        else if(temp == 'L') x--;
        else if(temp == 'U') y++;
        else if(temp == 'D') y--;

        health--;
        if(health < 0) {
            cout << "No" << endl;
            return 0;
        }
        
        if(mp[{x,y}] > 0 && health < K) {
            mp[{x,y}]--;
            health = K;
        }
    }
    
    
    
    
    
    cout << "Yes" << endl;
    return 0;
    
}