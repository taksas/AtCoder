// ABC301 - A
// DIFF
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


int atcoder_scanner(char c);

int main() {
    string S, T; cin >> S >> T;
    
    vector<char> test_list;
    set<char> test_check;
    map<char,int> mp;
    int atcheck1 = 0, atcheck2 = 0;

    rep(i, S.length()) {
        char temp1 = S[i], temp2 = T[i];
        mp[temp1]++; mp[temp2]--;

        if(temp1 == '@') atcheck1++;
        if(temp2 == '@') atcheck2++;

        int check1 = test_check.size();
        test_check.insert(temp1);
        if(check1 != test_check.size()) test_list.push_back(temp1);

        check1 = test_check.size();
        test_check.insert(temp2);
        if(check1 != test_check.size()) test_list.push_back(temp2);

    }
    
    rep(i,test_list.size()) {
        int target = mp[test_list[i]];
        if(target == 0 || test_list[i] == '@') continue;
        
        if(!atcoder_scanner(test_list[i])) {
            cout << "No" << endl;
            return 0;
        }

        if(target > 0) {
            if(target <= atcheck2) {
                atcheck2 -= target;
            } else {
                cout << "No" << endl;
                return 0;
            } 
        } else {
            if(abs(target) <= atcheck1) {
                atcheck1 -= abs(target);
            } else {
                cout << "No" << endl;
                return 0;
            } 
        }
    }
    
    cout << "Yes" << endl;
    return 0;
    
}



int atcoder_scanner(char c) {
    if(c == 'a' || c == 't' || c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'r') return 1;
    else return 0;
}