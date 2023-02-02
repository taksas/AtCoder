// ABC010 - B
// ASAKATSU
// rnd
// SHOULD?

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


// -----     cpp_snippets_v4     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)

#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(X)             if(DEBUGGING) { X }

#define INF                     1e18


#define DEBUGGING 1

using namespace std;

int check(int temp) {
    if(temp%2 == 0 || (temp+1)%3 == 0) {
        return -1;
    }
    return 0;
}

int main() {
    int n; cin >> n;
    int ans = 0;
    rep(i,n) {
        int temp; cin >> temp;
        while(1) {
            if(check(temp) == -1) {
                temp--;
                ans++;
            } else {
                break;
            }
        }
    }
    coutd(ans);

    
    
    
    return 0;
    
}