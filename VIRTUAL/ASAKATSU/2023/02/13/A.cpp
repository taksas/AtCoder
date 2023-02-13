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
    string S, T; cin >> S >> T;
    int temp = 0, count = 0;
    for(int i = 0; i < S.length(); i++) {
        char t1, t2; t1 = S[i]; t2 = T[i];
        if(t1 != t2) {
            temp++;
            if(temp == 3) {
                cout << "No" << endl;
                return 0;
            }
            if(temp == 2) {
                if(count == 1) {
                    cout << "No" << endl;
                    return 0;
                }
                char t1b = S[i-1], t2b = T[i-1];
                if(t1b == t2 && t2b == t1) {
                    count++;
                } else {
                    cout << "No" << endl;
                    return 0;
                }
                
            }
        } else {
            if(temp == 1) {
                cout << "No" << endl;
                return 0;
            }
            temp = 0;
        }
    }
    
    
    cout << "Yes" << endl;
    return 0;
    
}