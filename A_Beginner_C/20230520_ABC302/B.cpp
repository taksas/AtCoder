// ABC302 - B
// REALTIME
// rnd
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

char next_checker(char c);
char dfs(char taro, int io, int jo);

int H, W;
map<pair<int,int>,char> mp;

int ans;

int main() {
    cin >> H >> W;
    
    vector<pair<int,int>> starter;
    
    rep(i,H) {
        string temps; cin >> temps;
        rep(j,W) {
            char temp = temps[j];
            mp[{i,j}] = temp;
            if(temp == 's') starter.push_back({i,j});
        }
    }

    rep(o,starter.size()) {
        int i1 = starter[o].first-1, j1 = starter[o].second-1;

        if('F' == dfs('n', i1, j1)) {
            cout << "Yes " << starter[o].first << ", " << starter[o].second << endl;
            return 0;
        }
    }
    
    return 0;
    
}


char next_checker(char c) {
    char target = 'N';
    if(c == 's') target = 'n';
    else if(c == 'n') target = 'u';
    else if(c =='u') target = 'k';
    else if(c == 'k') target = 'e';
    else if(c == 'e') return 'F';
    return target;
}

char dfs(char taro, int io, int jo) {
    if(taro == 'F') return 'F';
    if(taro == 'N') return 'N';
    int i1 = io, j1 = jo;
    char next = taro;

    int skip = 0;
    int count = 0;
    int counttemp = count;
    rep(i,3) {
        rep(j,3) {
            int i2 = i1+i, j2 = j1+j;
            if(i2 >= H || j2 >= W) continue;
            if(next == mp[{i2,j2}]) {
                i1 = i2-1;
                j1 = j2-1;
                skip++;
                count++;
                return dfs(next_checker(next), i1, j1);
                break;
            }
        }
        if(skip) break;
    }
    if(count == counttemp) return 'N';
    

}