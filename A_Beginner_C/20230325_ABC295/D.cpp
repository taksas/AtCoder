// ABC295 - D
// REALTIME
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


// -----     cpp_snippets_v2     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define repe(i,n)               for (int i = 0; i <= n; i++)
#define rrep(i,n)               for (int i = n; i > 0; i--)
#define rrepe(i,n)              for (int i = n; i >= 0; i--)
#define rep1(i,n)               for (int i = 1; i < n; i++)
#define rep1e(i,n)              for (int i = 1; i <= n; i++)
#define rrep1(i,n)              for (int i = n; i > 1; i--)
#define rrep1e(i,n)             for (int i = n; i >= 1; i--)

#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))

#define vpii(X)                 vector<pair<int, int>> X
#define vpss(X)                 vector<pair<string, string>> X
#define vpcc(X)                 vector<pair<char, char>> X
#define vpis(X)                 vector<pair<int, string>> X
#define vpic(X)                 vector<pair<int, char>> X
#define vpsi(X)                 vector<pair<string, int>> X
#define vpsc(X)                 vector<pair<string, char>> X
#define vpci(X)                 vector<pair<char, int>> X
#define vpcs(X)                 vector<pair<char, string>> X
#define vint(X)                 vector<int> X
#define vchar(X)                vector<string> X
#define vstring(X)              vector<char> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define dcoutd(X)               if(DEBUGGING) cout << X << endl


#define DEBUGGING 1

using namespace std;

int main() {
    string S; cin >> S;
    vector<int> N;
    for(int i = 0; i < S.length(); i++) {
        char temp = S[i];
        N.push_back(temp - 48);
    }

    int ans = 0;
    vector<vector<int>> dp(S.length()-1,vector<int>(S.length()-1));
    map<int,int> mp;
    set<int> target;
    int count = 0;
    for(int i = S.length() - 2; i >= 0; i--) {
        if(mp[N[i]] == 0) target.insert(N[i]);
        mp[N[i]]++;

        int res = 1;
        for(int k = 0; k < target.size(); k++) {
            auto itr = target.begin();
            if(mp[*itr + k] % 2 != 0) res = 0;
        }
        if(res) ans++;


        int temp1 = i, temp2 = S.length()-1;

        for(int j = 0; j < S.length() - 2 - count; j++) {
            temp1--; 
            if(mp[N[temp1]] == 0) target.insert(N[temp1]);
            mp[N[temp1]]++;
            
            mp[N[temp2]]--;
            if(mp[N[temp2]] = 0) target.erase(N[temp2]);
            temp2--;

            int res = 1;
            for(int k = 0; k < target.size(); k++) {
                auto itr = target.begin();
                if(mp[*itr + k] % 2 != 0) res = 0;
            }
            if(res) ans++;
        }
        count++;
        
    }
    
    cout << ans << endl;
    
    return 0;
    
}