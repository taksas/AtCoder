// code-festival-2016-qualb - B

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>


#define rep(i,n)      for (int i = 0; i < n; i++)
#define repe(i,n)     for (int i = 0; i <= n; i++)

#define rrep(i,n)     for (int i = n; i > 0; i--)
#define rrepe(i,n)    for (int i = n; i >= 0; i--)

#define vrep(X)       for (auto&& x : X)

#define bgen(X)       begin(X), end(X)

#define coutd(X)      cout << X << endl;

#define vpii(X)       vector<pair<int, int>> X
#define vpss(X)       vector<pair<string, string>> X
#define vpcc(X)       vector<pair<char, char>> X
#define vpis(X)       vector<pair<int, string>> X
#define vpic(X)       vector<pair<int, char>> X
#define vpsi(X)       vector<pair<string, int>> X
#define vpsc(X)       vector<pair<string, char>> X
#define vpci(X)       vector<pair<char, int>> X
#define vpcs(X)       vector<pair<char, string>> X


using namespace std;

int main() {
    int N, A, B; cin >> N >> A >> B;
    string st; cin >> st;
    int tuu = 0, kaigai = 0;
    rep(i,st.length()) {
        if(st[i] == 'a' && tuu < A + B) {
            cout << "Yes" << endl;
            tuu++;
            continue;
        }
        if(st[i] == 'b' && tuu < A + B && kaigai < B) {
            cout << "Yes" << endl;
            kaigai++;
            tuu++;
            continue;
        }
        cout << "No" << endl;
    }
    
    return 0;
    
}