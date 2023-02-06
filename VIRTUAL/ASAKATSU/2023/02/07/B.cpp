// AAA000 - Q
// DIFF
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
#include <regex>

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
    string X; cin >> X;

    map<char,char> mp;
    char tempchr = 'a';
    for(int i = 0; i < 27; i++) {
        char temp = X[i];
        mp[temp] = tempchr++;
    }
    int N; cin >> N;
    vector<string> S(N);
    vector<pair<string, int>> R(N);
    for(int i = 0; i < N; i++) {
        cin >> S[i];
    }

    for(int i = 0; i < N; i++) {
        R[i].second = i;
        string temp = S[i];
        for(char j = 'a'; j <= 'z'; j++) {
            temp.replace(mp[j], temp.length(), j);
            cout << (j) << " " << mp[j] << endl;
        }
        cout << temp;
        R[i].first = temp;
    }
    sort(R.begin(), R.end());

    for(int i = 0; i < N; i++) {
        cout << R[i].first << endl;
    }

    
    
    return 0;
    
}