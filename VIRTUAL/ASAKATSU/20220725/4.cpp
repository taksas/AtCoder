// tenka1-2012-qualC - B
// ASAKATSU
// rnd
// NOT_YET

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


// -----     cpp_snippets_v5     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)

#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(X)             if(DEBUGGING) { X }

#define INF                     1e18


#define DEBUGGING 1

using namespace std;

int main() {
    string s; cin >> s;
    map<char,int> mp;

    char ans = 'P';
    int check = 0;
    rep(i,s.length()) {
        char temp1 = s[i], temp2 = s[i+1];
        if(temp2 == '1' || temp2 == 'J' || temp2 == 'Q' || temp2 == 'K' || temp2 == 'A') {
            mp[temp1]++;
        }
        if(mp[temp1] == 5) {
            ans = temp1;
            break;
        } 
        i++;
        if(temp2 == '1') i++;
    }
    

    rep(i,s.length()) {
        char temp = s[i];
        if(temp != ans) {
            cout << temp;
            temp = s[i+1];
            cout << temp;
            if(temp == '1') cout << "0";
            check = 1;
        } else {
            mp[ans]--;
        }
        
        if(!mp[ans]) break;
        temp = s[i+1];
        i++;
        if(temp == '1') i++;
    }
    if(!check) {
        cout << "0";
    }
    cout << endl;
    return 0;
    
}